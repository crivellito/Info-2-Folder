
#include <stdio.h>

int main(void){
	
	unsigned int dato = 1234;
	unsigned int resultado;

	resultado = dato ^= (1 << 8);
	printf("El resultado es: %u\n", resultado);

    return 0;
}
