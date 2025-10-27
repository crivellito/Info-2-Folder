#include "funcion_lineal.h"
using namespace std;

void funcion_lineal :: set_coord () {
    cout << "Ingrese las coordenadas de m" << endl;
    cin >> m_coord;
    cout << "Ingrese las coordenadas de b" << endl;
    cin >> b_coord;
}

void funcion_lineal :: set_coord (double m, double b) {
    m_coord = m;
    b_coord = b;
}

void funcion_lineal :: print_coord () {
    cout << "f(x) = " << m_coord << "x" << "+" << b_coord << endl;
}

double funcion_lineal :: evaluar (double x) {
    double y;
    y = (m_coord * x) + b_coord;
    cout << "Valor de la funcion: \n f(" << x << ") = " << y << endl;
    return y;
}

double funcion_lineal :: raiz () {
    double cero;
    cero = (- b_coord) / m_coord;
    cout << "Cero de la funcion: " << cero << endl;
    return cero;
}

funcion_lineal operator+ (const funcion_lineal& f, const funcion_lineal& g) {
   return funcion_lineal (f.m_coord + g.m_coord, f.b_coord + g.b_coord);
}


double funcion_lineal :: operator() (double x){
    double valuado = ((m_coord * x) + b_coord);
    cout << "f(" << x << ") = " << valuado << endl;
    return valuado;
}
