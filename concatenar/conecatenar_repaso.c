#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

unsigned char alta, baja, resultado;
void binary_print (uint8_t);


int main (int argc, char **argv) {
    alta = atoi(argv[1]); 
    baja = atoi(argv[2]); 
    resultado |= ((alta << 4) | (baja));
    printf("El resultado es: %u\nEn decimal\n", resultado);
    binary_print(resultado);

  return 0;
}

void binary_print (uint8_t binario) {
    for (int i=7 ; i>=0 ; i--) {
      putchar((binario & (1<<i) ? '1' : '0'));
    }
    printf("\n");
}


    



