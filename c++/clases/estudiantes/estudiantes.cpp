#include "estudiantes.h"

Estudiante :: Estudiante () {}

Estudiante &Estudiante :: cargar (string& n, int& e, long& d) {
  name = n;
  edad = e;
  dni = d;
  return *this;
}

void Estudiante :: mostrar () {
  cout << name << endl;
  cout << edad << endl;
  cout << dni << endl;
}

