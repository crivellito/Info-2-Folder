#include <stdio.h>

int main (int argc, char *argv[]){

  printf(argv[0]);
  printf("\n");
  printf(argv[1]);
  printf("\n");
  printf(argv[2]);
  printf("\n");

  char *teclas[4] = {"Arriba", "Abajo", "Izquierda", "Derecha"};
  printf(teclas[0]);
  char *teclas2[2][2] = {{"Arriba", "Abajo"}, {"Izquierda", "Derecha"}};
  printf(teclas2[0][1]);
  printf("\n");
  return 0;
}
