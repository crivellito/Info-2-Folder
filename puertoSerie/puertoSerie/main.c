#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "termset.h"

int main()
{
    int fd; // Descriptor de archivo para el puerto serie
    struct termios ttyold, ttynew; // Estructuras para configurar el puerto serie
    char buffer[256]; // Buffer para leer datos del puerto serie
    const char *mensaje = "Hola desde Linux\n"; // Mensaje a enviar

    fd = open("/dev/ttyUSB0", O_RDWR | O_NOCTTY | O_NONBLOCK);  // Abrir el puerto serie en modo lectura y escritura, no como terminal de control y función read() " No bloqueante".
    if (fd == -1) {
        perror("Error al abrir el puerto serie");
        return 1;
    }
    
    //Limpia el búfer de entrada antes de empezar
    tcflush(fd, TCIFLUSH);

    printf("Modificando los parametros del puerto serie por: 115200bps 8N1\n");
    if (termset(fd, 115200, &ttyold, &ttynew) != 0) {	    // Configurar el puerto serie con la velocidad deseada
        close(fd);
        return 1;
    }
    sleep(2); //Cada vez que se abre el puerto, se resetea el ARDUINO por RTS, con esto se espera antes de escribir.
    printf("Escribiendo mensaje por el puerto serie: %s\n", mensaje);
    ssize_t bytes_escritos = write(fd, mensaje, strlen(mensaje));	    // Escribir el mensaje en el puerto serie
    if (bytes_escritos == -1) {
        perror("Error al escribir en el puerto serie");
        close(fd);
        return 1;
    }

    sleep(2); //Como el arduino demora en responder, debo esperar un tiempo acorde.
    printf("Leyendo mensaje por el puerto serie\n");
    ssize_t bytes_leidos = read(fd, buffer, sizeof(buffer) - 1);		    // Leer la respuesta del puerto serie
    if (bytes_leidos == -1) {
        perror("Error al leer del puerto serie");
        close(fd);
        return 1;
    }
    buffer[bytes_leidos] = '\0';      // Añadir un terminador nulo al final del buffer para asegurar que sea una cadena válida
    printf("Datos recibidos: %s\n", buffer);	 // Mostrar los datos recibidos
    
    // Restaurar la configuración original del puerto serie
    if (tcsetattr(fd, TCSANOW, &ttyold) != 0)  perror("Error al restaurar la configuración del puerto serie");
        
    close(fd);	// Cerrar el puerto serie
    return 0;
}
