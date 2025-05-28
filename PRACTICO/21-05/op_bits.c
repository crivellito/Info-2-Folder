
#include <stdio.h>

int main(void){

      unsigned int numero = 3210;
      printf("%d", numero);
      numero |= (1 << 4);
      printf("\n%d", numero);
      printf("\n");


  return 0;
}
