#include <stdio.h>

int main (void) {

    unsigned int config = 54;
    
    if (config & (1<<4)){
      printf("El bit está encendido\n");
    } else {
      printf("El bit no está encendido\n");
    }
}



