#include <stdio.h>
#ifndef OPERACION

#define OPERACION ( a + b )
#endif

int main (void) {

    //int a = 5, b = 3;
    int resultado;

    resultado = OPERACION;
    printf("El resultado de la operacion es: %d\n", resultado);

  return 0;
}
