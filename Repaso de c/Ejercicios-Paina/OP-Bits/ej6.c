#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    unsigned int num1, num2;
}numeros;

void input_num();

int main(void){
    numeros combinacion1;
    input_num();

    return 0;
}



void input_num(void){
    unsigned char num1[10];
    printf("Ingrese el numero 1 en binario (solo 8bits) : ");
    scanf("%s",num1);
    printf("El numero ingresado es: %s", num1);


