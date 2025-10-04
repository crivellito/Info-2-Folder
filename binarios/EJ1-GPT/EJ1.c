#include <stdio.h>
unsigned char x = 0xAC;
void binary_print (unsigned char);
void toggle (unsigned char);
void rohs_function (unsigned char, unsigned char);
void desplazamientos (unsigned char);
unsigned char rho = 0x0F;

int main (void) {
    printf ("%u\n", x);
    unsigned char menos_signif = 0;
    menos_signif = (x & 0x0F); 
    unsigned char mas_signific = 0;
    mas_signific = (x & 0xF0);
    binary_print (x);
    binary_print (menos_signif);
    binary_print (mas_signific);
    toggle (x); 
    printf ("Rhos function");
    rohs_function (x, rho);
    desplazamientos (x);
  return 0;
}

   
void binary_print (unsigned char bin) {
    int i = 7;
    for (; i>=0 ; i--) {
      putchar ( bin & (1 << i) ? '1' : '0'); 
    }
  printf("\n");
}


void toggle (unsigned char bin) {
    bin |= 0x04;
    binary_print (bin);
    bin &= ~(1 << 7);
    binary_print (bin);
    bin ^= (1 << 3);
    binary_print (bin);
}

void rohs_function (unsigned char bin, unsigned char rho) {
      unsigned char bin_primeros4 = 0xF0;
      bin_primeros4 &= bin;
      printf("\n");
      binary_print (rho |= bin_primeros4);
}

void desplazamientos (unsigned char bin) {
    binary_print (bin << 2);
    binary_print (bin >> 3);
}
     


  
    

