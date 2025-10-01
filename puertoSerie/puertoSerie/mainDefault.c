#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

int main()
{
    int fd; // Descriptor de archivo para el puerto serie
    char buffer[256]={'\0'}; // Buffer para leer datos del puerto serie
    const char *mensaje = "Hola desde Linux\n"; // Mensaje a enviar. Importanto usar '\n' para que Arduino detecte el fin del string

    printf("Abriendo el puerto serie con parametros por defectos: 9600bps 8N1\n");
    fd = open("/dev/ttyUSB0", O_RDWR | O_NOCTTY | O_NONBLOCK);  // Abrir el puerto serie en modo lectura y escritura, no como terminal de control y función read() " No bloqueante".
    if (fd == -1) {
        perror("Error al abrir el puerto serie");
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

    //Limpia el búfer de entrada antes de empezar
    tcflush(fd, TCIFLUSH);
    
    sleep(2); //Como el arduino demora en responder, debo esperar un tiempo acorde. Si se usa O_NONBLOCK, esto no es necesario
    printf("Leyendo mensaje por el puerto serie\n");
    ssize_t bytes_leidos = read(fd, buffer, sizeof(buffer) - 1);		    // Leer la respuesta del puerto serie
    if (bytes_leidos == -1) {
        perror("Error al leer del puerto serie");
        close(fd);
        return 1;
    }
    buffer[bytes_leidos] = '\0'; // Añadir un carácter nulo para tratar el buffer como una cadena C
    printf("Datos recibidos: %s\n", buffer);	 // Mostrar los datos recibidos
        
    close(fd);	// Cerrar el puerto serie
    return 0;
}
