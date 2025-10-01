#include <stdio.h>
#include <stdint.h>

void empaquetador (uint8_t *s1, uint8_t *s2, uint8_t *s3, uint8_t *s4, uint16_t *empaquetado){
  *empaquetado |= ((*s1 << 12) | (*s2 << 8) | (*s3 << 4) | (*s4));
}
   
int main (void){
  uint8_t s1 = 9; 
  uint8_t s2 = 15;
  uint8_t s3 = 4;
  uint8_t s4 = 12;
  uint16_t empaquetado = 0;

  empaquetador (&s1, &s2, &s3, &s4, &empaquetado);
  printf ("El valor del empaquetado es: %hu\n", empaquetado);

  return 0;
}
