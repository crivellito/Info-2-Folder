#include <iostream>


class Complejo {
  
  double real, imaginario;
  
    public:
    // Constructor
    Complejo(double r = 0, double i = 0) : real(r), imaginario(i) {}

    // Sobrecarga del operador * para multiplicar con un número real
    Complejo operator*(double escalar) const {
    Complejo resultado(real * escalar, imaginario * escalar);
    return resultado;
}
// Sobrecarga del operador * para multiplicar con otro objeto Complejo

Complejo operator*(const Complejo& otro) const {
    double r = (real * otro.real - imaginario * otro.imaginario);
    double i = (real * otro.imaginario + imaginario * otro.real);
    return Complejo(r, i); //Crea un objeto temporal, sin nombre, y lo retorna.
}
// Método para mostrar el número complejo. //Función implícita inline

void mostrar() const {
  std::cout << "(" << real << " + " << imaginario << "i)" << std::endl;
  }
};
