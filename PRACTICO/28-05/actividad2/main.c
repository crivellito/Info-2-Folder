#include <stdio.h>
#include <stdbool.h>
#include "util.h"
#include <string.h>

#ifdef MY_STRING
    #define STR_VALUE MY_STRING
#else
    #define STR_VALUE "default"
#endif

int main (void) {

    char str[] = STR_VALUE;    
    unsigned char letra = 'a';
      printf ("Valor : %c\n", letra);
    setBit (1, &letra);
      printf ("Valor : %c\n", letra);
    resetBit (1, &letra);   //CAMBIA EL ESTADO DEL BIT
      printf ("Valor : %c\n", letra);
    bool a = getBit (0, &letra);     
      printf ("Valor : %d\n", a);
    int longitud = strlen(str);

    
    deencrypt (longitud, str);
  
  return 0;
}
