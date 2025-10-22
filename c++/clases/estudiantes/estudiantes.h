#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

#include <string>
#include <iostream>
using namespace std;

class Estudiante {
  public: 
    Estudiante ();
    Estudiante& cargar (string&, int&, long&);
    void mostrar ();
  private:
    string name;
    int edad;
    long dni;
};

#endif
