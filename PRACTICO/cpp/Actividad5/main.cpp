#include "funcion_lineal.h"
#include <iostream>
using namespace std;

int main (void) {
    double x; 
    funcion_lineal primera(2,3);
    funcion_lineal segunda(4,5);
    funcion_lineal tercera = primera + segunda;
    
    primera.print_coord();
    segunda.print_coord();
    tercera.print_coord();
    
    cout << "Ingrese el valor de x: " << endl;
    cin >> x;
    primera.evaluar(x);
    primera.raiz();
    primera(5); 

    return 0;
}
