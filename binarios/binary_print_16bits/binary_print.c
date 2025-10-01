#include <stdio.h>
#include <stdlib.h>

void binary_print(unsigned short);

int main (int argc, char *argv[]){
    unsigned short num = atoi(argv[1]);
    binary_print (num);
    return 0;
}

void binary_print (unsigned short num){

    unsigned char b;
    unsigned short mask = (1 << 15);

    for (b = 0 ; b < 16 ; b++){
        putchar(num & mask ? '1' : '0');
        mask >>= 1;
    }
    printf("\n");
}

