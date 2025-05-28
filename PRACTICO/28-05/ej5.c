#include <stdio.h>

int main (void) {
    
    unsigned int estado = 0;
    unsigned int mask_b2_b5 = 0;
    mask_b2_b5 |= (1 << 2);
    mask_b2_b5 |= (1 << 5);
    estado |= (1<<0);
    estado |= (1<<3);
    estado |= (1<<6);

    printf ("Valor poniendo los bits 0,3 y 6 en uno: %d\n", estado);

    estado ^= mask_b2_b5;
    printf("Valor invirtiendo los bits 2 y 5: %d\n", estado);

  return 0;
}

