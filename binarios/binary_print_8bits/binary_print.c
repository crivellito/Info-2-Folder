#include <stdio.h>
#include <stdlib.h>

void binary_print (unsigned char);

int main (int argc, char *argv[]) {
    binary_print (atoi(argv[1]));
    return 0;
}
    
void binary_print (unsigned char num){
    unsigned char b, mask = (1 << 7);
    for (b = 1 ; b <= 8 ; b++){
        putchar(num & mask ? '1' : '0');
        mask >>= 1;
    }
    printf("\n");
}
    
