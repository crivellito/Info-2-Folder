#include <iostream>
#include "estudiantes.h"

using namespace std;

int main (void) {
  Estudiante t;
  string nombre = "augusto";
  int edad = 22;
  long dni = 44815892;
  
  t.cargar(nombre, edad, dni).mostrar();
  
    
  return 0;
}
