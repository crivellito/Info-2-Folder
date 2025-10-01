
#include <stdio.h>

int main (void) {
    
    int opcion ;
    printf("Ingrese que operacion:\n1 - & \n2 - |\n3 - ^\n");
    scanf("%d", &opcion);
    
    int a ;
    int b ;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    switch (opcion) {
      case 1:
        //AND
        printf("Resultado en decimal: %d\n", (a & b));
      case 2:
        //OR
        printf("Resultado en decimal: %d\n", (a | b));
      case 3:
        //XOR
        printf("Resultado en decimal: %d\n", (a ^ b));
    }
  return 0;
}
