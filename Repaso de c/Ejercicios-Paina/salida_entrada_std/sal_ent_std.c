#include <stdio.h>
#include <math.h>

int main (void) {
    int salir = 1; 
    int numero = 0;
    while (salir == 1) {
        printf("Ingrese un numero \n");
        printf("0 - Para salir \n");
        scanf ("%d", &numero);
        if (numero > 0) {
            printf("Valor de la raiz: %.2f", sqrt(numero));
        }
        else if (numero < 0) {
            fprintf( stderr , "El numero es negativo");
        }
        else {
          printf ("Saliendo");
          salir = 0;
        }
    }
  return 0;
}
    
