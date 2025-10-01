#include <iostream>
#include "complejo.h"

int main() {
  
    Complejo c1(3, 4); // Número complejo 3 + 4i
    Complejo c2(1, 2); // Número complejo 1 + 2i
                       
  // Multiplicar c1 por un escalar
    Complejo resultado1 = c1 * 2.0; // Multiplica por 2.0
    resultado1.mostrar(); // Muestra (6 + 8i)

  // Multiplicar c1 por c2
    Complejo resultado2 = c1 * c2; //Multiplica (3 + 4i)*(1 + 2i)
    resultado2.mostrar(); //Muestra (-5 + 10i)
    return 0;
}
