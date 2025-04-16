#include <stdio.h>
#include <stdlib.h>

void binary_print(unsigned char );

int main(int argc , char *argv[])
{
	printf("Ingrese el valor a convertir: ");		
	unsigned char val;
	scanf("%hhu", &val);
	printf("El valor en binario es: ");
	binary_print(val);
	printf("\n");
	printf("El valor en decimal es: %d\n", val);
	printf("El valor en hexadecimal es: %x\n", val);
	printf("El valor en octal es: %o\n", val);

}

void binary_print(unsigned char val){
        unsigned char b, mask = 1 << 7;
	for(b = 1; b <= 8*sizeof(unsigned char); b++){
		//printf("\nValor de la mask: %hhu\n", mask);
        	putchar(val & mask ? '1' : '0');
        	mask >>= 1;
	}
}

