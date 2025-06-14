#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

void mi_handler(int sig) {
    printf("Recibida la señal %d\n", sig);
}

int main() {
    signal(SIGINT, mi_handler);  // Asocia SIGINT (Ctrl+C) a mi_handler

    while (1) {
        printf("Esperando señal...\n");
        sleep(1);
    }
    return 0;
}

