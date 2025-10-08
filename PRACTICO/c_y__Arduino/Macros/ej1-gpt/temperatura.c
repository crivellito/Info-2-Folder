#include <stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? (-(a)) : (a))

int temp1 = -5, temp2 = 12;
int hum1 = 85, hum2 = 70;

int main (void) {

  #ifdef DEBUG
    printf("Leyendo sensores...\n");
  #endif
  int temp_corr = ABS(temp1);
  int hum_max = MAX (hum1,hum2);
  int hum_min = MIN (hum1,hum2);
  #ifdef DEBUG
    printf("[DEBUG] Temperatura corregida: %d\n", temp_corr);
    printf("[DEBUG] Humedad: max=%d   min=%d\n", hum_max, hum_min);
  #endif
  #ifndef DEBUG
    if (temp1 < 0)
      printf("Temperatura bajo cero\n");
    if (hum_max >80)
      printf("Humedad elevada\n");
  #endif
  return 0;
}
