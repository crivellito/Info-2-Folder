#include <stdio.h>

int main (void) {

    unsigned int numero = 1024;
    unsigned int resultado;
    
    printf("Valor del numero %d\n", numero);
    
    resultado = numero | (1<<3); 

    printf("Valor del resultado %d\n", resultado);

    

    return 0;
}
