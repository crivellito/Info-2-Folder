#include <string.h>
#include <stdio.h>

int main(void){
    char cadena1[100], cadena2[100], cadena_final[400];
    char cadena_space[2]={' '};
    printf("Ingrese el contenido de la cadena numero 1: \n");
    scanf("%s",cadena1);
    printf("Ingrese el contenido de la cadena numero 2: \n");
    scanf("%s",cadena2);
    
    strcat(cadena_final,cadena1);
    strcat(cadena_final,cadena_space);
    strcat(cadena_final,cadena2);

    printf("%s\n",cadena_final);

    return 0;
}
