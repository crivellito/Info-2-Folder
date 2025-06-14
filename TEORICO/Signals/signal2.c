#include <stdio.h>
#include <unistd.h>
#include <signal.h>

unsigned int flag = 1;  // variable global para controlar el bucle
void handler(int );     //prototipo del manejador de la señal


int main(void) {
    signal(SIGINT, handler); // asignar el manejador de la señal SIGINT
    printf("Iniciando bucle...\n");
    while(flag)
    {
        printf("Corriendo.\n");
        sleep(1);
    }
    printf("\nTerminando bucle...\n");
    return 0;
}


void handler(int sig) { flag = 0; } // manejador de la señal

