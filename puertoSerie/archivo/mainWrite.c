#include <fcntl.h>   // Para open()
#include <unistd.h>  // Para write(), close()
#include <stdio.h>   // Para perror()
#include <string.h>

int main() {
    // Datos a escribir
    const char *mensaje = "Hola, mundo!";

    // Abrir el archivo para escritura (crear si no existe, truncar si ya existe)
    int fd = open("archivo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Escribir los datos en el archivo
    ssize_t bytes_escritos = write(fd, mensaje, 13);
    if (bytes_escritos == -1) {
        perror("Error al escribir en el archivo");
        close(fd);
        return 1;
    }

    // Cerrar el archivo
    if (close(fd) == -1) {
        perror("Error al cerrar el archivo");
        return 1;
    }

    return 0;
}

