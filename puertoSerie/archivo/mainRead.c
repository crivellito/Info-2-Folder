#include <fcntl.h>   // Para open()
#include <unistd.h>  // Para read() y close()
#include <stdio.h>   // Para perror()

#define BUFFER_SIZE 100

int main() {
    // Crear un buffer para almacenar los datos leídos
    char buffer[BUFFER_SIZE];
    
    // Abrir el archivo para lectura
    int fd = open("archivo.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Leer datos del archivo
    ssize_t bytes_leidos = read(fd, buffer, sizeof(buffer) - 1); // Reservar espacio para el carácter nulo
    if (bytes_leidos == -1) {
        perror("Error al leer el archivo");
        close(fd);
        return 1;
    }

    // Asegurarse de que el buffer esté null-terminado
    buffer[bytes_leidos] = '\0'; // Añadir un carácter nulo para tratar el buffer como una cadena C

    // Imprimir los datos leídos
    printf("Datos leídos: %s\n", buffer);

    // Cerrar el archivo
    if (close(fd) == -1) {
        perror("Error al cerrar el archivo");
        return 1;
    }

    return 0;
}

