#include "funcion_lineal.h"
#include <iostream>
using namespace std;

int main (void) {
    double x; 
    funcion_lineal primera(2,3);
    primera.print_coord();
    cout << "Ingrese el valor de x: " << endl;
    cin >> x;
    primera.evaluar(x);
    primera.raiz();
    return 0;
}
