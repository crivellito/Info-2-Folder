#include <stdio.h>
#include <stdlib.h>


void a_cero_bit(unsigned char*);
void binary_print(unsigned char);
void a_uno (unsigned char *);
void valor_de_un_bit ();

int main(void){
    unsigned char byte, byte2;
    int n;
    printf("Ingrese el valor en decimal: ");
    scanf("%hhu", &byte);
    a_cero_bit(&byte);
    binary_print(byte);
    printf("Ingrese el NUEVO valor en decimal: ");
    scanf("%hhu", &byte2);
    a_uno(&byte2);
    binary_print(byte2);
    valor_de_un_bit ();
    return 0;
}

void a_cero_bit(unsigned char *byte) {
    int n;
    printf("Ingrese el numero de bit a poner en cero (0-7): ");
    scanf("%d", &n);
    unsigned char mask = (1 << n);
    *byte &= ~(mask);
    printf("El byte modificado es: %hhu\n", *byte);
}


void binary_print (unsigned char byte) {
    for (int i=7 ; i>=0 ; i--) {
      putchar( (byte & (1 << i) ? '1' : '0') );
    }
    printf("\n");
}

void a_uno (unsigned char *byte) {
    int n;
    printf("Ingrese el numero de bit a poner en uno (0-7): ");
    scanf("%d", &n);
    unsigned char mask = (1 << n);
    *byte |= mask;
}

void valor_de_un_bit () {
    unsigned char byte;
    int n;
    printf("\nIngrese un valor en decimal para conocer el valor de un bit xd: ");
    scanf ("%hhu", &byte);
    printf("Ingrese el valor del bit a conocer valor: ");
    scanf ("%d", &n);
    printf("Valor del bit n°: %d\n", n);
    putchar ( (byte & (1<<n)) ? '1' : '0');
}

