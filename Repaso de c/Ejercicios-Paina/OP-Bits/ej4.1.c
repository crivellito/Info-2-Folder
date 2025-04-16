#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void binary_print(uint16_t );

int main(int argc , char *argv[])
{
	printf("Ingrese el valor a convertir: ");		
	uint16_t val;
	printf("Valor de val antes de leerlo: %u\n", val);
	binary_print(val);
	printf("\n");
	scanf("%u", &val);
	printf("El valor en binario es: ");
	binary_print(val);
	printf("\n");
	printf("El valor en decimal es: %u\n", val);
	printf("El valor en hexadecimal es: %x\n", val);
	printf("El valor en octal es: %o\n", val);

}

void binary_print(uint16_t val){
    unsigned char b;
    uint16_t mask = 1 << 15;
	for(b = 1; b <= 16*sizeof(unsigned char); b++){
		//printf("\nValor de la mask: %hhu\n", mask);
        	putchar(val & mask ? '1' : '0');
        	mask >>= 1;
	}
}

