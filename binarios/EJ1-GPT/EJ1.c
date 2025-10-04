#include <stdio.h>
unsigned char x = 0xAC;
void binary_print (unsigned char);


int main (void) {

    unsigned char menos_signif = 0;
    menos_signif = (x & 0x0F); 
    unsigned char mas_signific = 0;
    mas_signific = (x & 0xF0);
    binary_print (x);
    binary_print (menos_signif);
    binary_print (mas_signific);

  return 0;
}

   
void binary_print (unsigned char bin) {
    unsigned char i = 0;
    for (; i<8 ; i++) {
      if (bin & (0x01 << i))
        printf("%u", 1);
      else
        printf("%u", 0);
    }
    printf("\n");
}
  
    

