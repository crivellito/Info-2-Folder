#include <stdio.h>

    #ifndef OPERACION
      #define OPERACION (a+b)
    #endif

int main(void){
    int a=5, b=3;
    printf("El resultado de la operacion es: %d\n", OPERACION);
  
    return 0;
}
