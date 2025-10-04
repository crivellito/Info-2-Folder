#include <stdio.h>
unsigned char a = 0xA6;
void bit2_a1 (unsigned char);
void bit5_a0 (unsigned char);
void binary_print (unsigned char);

int main (void) {
    bit2_a1(a);
    bit5_a0(a);  
  return 0;
}

void bit5_a0 (unsigned char a) {
    a &= ~(1<<5);
    binary_print (a);
}
    
void bit2_a1 (unsigned char a) {
    unsigned char mask = (1 << 2);
    a |= mask;
    binary_print (a);
}

void binary_print (unsigned char a) {
    for (int i=7 ; i>=0 ; i--) {
      putchar (a & (1 << i) ? '1' : '0');
    }
    printf("\n");
}


