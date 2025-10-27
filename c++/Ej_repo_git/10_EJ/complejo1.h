#ifndef COMPLEJO1_H
#define COMPLEJO1_H

class Complejo {
    public: 
      Complejo (int r = 0, int i = 0) : real(r), imaginaria(i) 
      Complejo operator + (const Complejo &c); 
    private:
      double real;
      double imaginaria;

};

#endif
