#ifndef FUNCION_LINEAL_H
#define FUNCION_LINEAL_H
#include <iostream>

class funcion_lineal {
    public:
      funcion_lineal (double m = 0, double b = 0) : m_coord(m), b_coord(b) {}
      void set_coord (double, double);
      void set_coord ();
      void print_coord ();
      double evaluar (double x);
      double raiz ();
    private: 
      double m_coord;
      double b_coord;
};


#endif
