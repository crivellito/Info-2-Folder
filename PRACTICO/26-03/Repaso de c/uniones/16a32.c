#include <stdint.h>
#include <stdio.h>

/*typedef union{
    uint32_t completo;
    uint16_t parte[2];
}datos32;
*/
void imprimirBinario(uint32_t num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);  // Extrae cada bit
        if (i % 4 == 0) printf(" ");  // Espaciado cada 4 bits (opcional, solo para mejor visualización)
    }
    printf("\n");
}
int main(void){
    //datos32 dato;

    /*printf("Ingrese la parte alta (16 bits, en decimal): ");
    scanf("%hu", &dato.parte[0]);
    printf("\nIngrese la parte baja (16 bits, en decimal): ");
    scanf("%hu", &dato.parte[1]);

    printf("\nEl numero completo de 32 bits es: %u (en decimal)\n",dato.completo);
*/
    
uint16_t parte_baja, parte_alta;
uint32_t resultado;

printf("Ingrese la parte baja: ");
scanf("%hu", &parte_baja);

printf("Ingrese la parte alta: ");
scanf("%hu", &parte_alta);

resultado = ((uint32_t)parte_alta << 16) | parte_baja;

printf("El número combinado es: %u (en decimal)\n", resultado);
printf("En binario: ");
    imprimirBinario(resultado);

    return 0;
}
