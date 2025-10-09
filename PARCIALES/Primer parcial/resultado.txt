#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

unsigned short swap (unsigned short);
void binary_print (unsigned short);
void evaluar (unsigned short);

int main (void) {
    unsigned short valor = 255;
    evaluar (swap(valor)); 
    return 0;
}

unsigned short swap (const unsigned short valor) {
    unsigned short mask_lsb;
    mask_lsb = (valor << 8);
    unsigned short mask_msb;
    mask_msb = (valor >> 8);
    unsigned short resultado = mask_lsb | mask_msb;
    binary_print (resultado);
    return resultado;
}

void evaluar (const unsigned short valor) {
    if ( ((valor & (1<<5)) == true) && ((valor & (1<<2)) == false) ){
      printf("Comando correcto b05 = true y b02 = false");
    }
    else {
      printf("No se detectaron los bits como se solicita\n");
    }
}

void binary_print (unsigned short byte) {
    for ( int i = 15 ; i >= 0 ; i-- ) {
      putchar ( (byte & (1<<i)) ? '1' : '0');
    }
    printf("\n");
}
