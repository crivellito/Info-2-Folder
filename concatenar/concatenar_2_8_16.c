#include <stdio.h>

void concatenar (unsigned char *a, unsigned char *b, unsigned short *final){
    *final |= ((*a << 8) | *b);
}

int main (void) {
    unsigned short final;
    unsigned char a = 0x0A;
    unsigned char b = 0x0B;
    concatenar (&a, &b, &final); 
    printf("El valor final es: %hu \n", final);
    return 0;
}

