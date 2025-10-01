#include <stdlib.h>
#include <stdio.h>

void lsb_msb (unsigned char);

int main (int argc, char *argv[]) {
    lsb_msb (atoi(argv[1]));
    return 0;
}

void lsb_msb (unsigned char num){

    unsigned char mask1 = (1<<0);
    unsigned char mask2 = (1<<7);
    printf("El lsb de %u es: ", num);
    putchar (num & mask1 ? '1' : '0');
    printf("\n");
    printf("El msb de %u es: ", num);
    putchar (num & mask2 ? '1' : '0');
    printf("\n");
}

    
