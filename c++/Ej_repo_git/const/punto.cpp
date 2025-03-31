#include "Punto.h"

// Funciones miembro constantes (no modifican los atributos)

int Punto::obtenerX() const {
    return x;
}

int Punto::obtenerY() const {
    return y;
}

// Función que sí modifica los atributos
void Punto::moverPunto(int nuevo_x, int nuevo_y){
    x = nuevo_x;
    y = nuevo_y;
}

