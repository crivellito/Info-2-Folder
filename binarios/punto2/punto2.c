
#include <stdio.h>

int main (void) {

    unsigned char a = (1<<2);
    unsigned char b = ~(1<<5);
    unsigned char resultado;
    resultado = (a | b);

    printf("%u\n", resultado);
    return 0;
}
    
