#include "circulo.h"

Circulo :: Circulo (double r, int a , int b) : Punto (a,b){
	estableceRadio (r), 
}

void Circulo :: estableceRadio (double r){
	radio = (r >= 0 ? r : 0);
}

double Circulo :: obtieneRadio() const {return radio;}

double Circulo :: area() const {
	return 3.15159 * radio * radio;
}


ostream &operator << (ostream &salida, const Circulo &c){
	salida << "Centro = " << static_cast <Punto> (c) << "; Radio = " << setiosflags (ios :: fixed | ios :: showpoint ) << setprecision (2) << c.radio;
	return salida;
}
