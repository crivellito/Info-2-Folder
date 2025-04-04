#include <iostream>
#include "Punto.h"

int main() {
    Punto p(10, 20);  // Objeto constante de tipo Punto

    // Solo podemos llamar a funciones miembro constantes desde un objeto constante
    std::cout << "Valor de X: " << p.obtenerX() << std::endl;
    std::cout << "Valor de Y: " << p.obtenerY() << std::endl;

    // Esto no se puede hacer porque el objeto es constante y moverPunto no es una función constante
    p.moverPunto(30, 40);  // Error: no puedes llamar a una función no constante en un objeto constante
    std::cout << "Punto modificado" << p.obtenerX() << "," << p.obtenerY() << std::endl;
    return 0;
}

