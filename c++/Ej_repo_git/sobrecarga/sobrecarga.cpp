#include <iostream>

class Complejo {
private:
    double parteReal;
    double parteImaginaria;

public:
    // Constructor
    Complejo(double real = 0.0, double imaginaria = 0.0)
        : parteReal(real), parteImaginaria(imaginaria) {}

    // Sobrecarga del operador +
    Complejo operator+(const Complejo& op2) {
        Complejo resultado;
        resultado.parteReal = parteReal + op2.parteReal;
        resultado.parteImaginaria = parteImaginaria + op2.parteImaginaria;
        return resultado;
    }

    // Método para mostrar el número complejo
    void mostrar() const {
        std::cout << "(" << parteReal << ", " << parteImaginaria << "i)" << std::endl;
    }
};

int main() {
    Complejo c1(1.2, 3.4);
    Complejo c2(5.6, 7.8);
    
    Complejo c3 = c1 + c2;  // Aquí se usa el operador sobrecargado
    
    std::cout << "La suma de c1 y c2 es: ";
    c3.mostrar();
    
    return 0;
}

