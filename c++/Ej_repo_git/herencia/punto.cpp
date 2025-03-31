#include "punto.h"
#include <iostream>
using namespace std;

Punto :: Punto (int a, int b) { establecePunto (a,b);}

void Punto :: establecePunto (int a, int b){
	x = a;
	y = b;
}

ostream &operator <<( ostream &salida, const Punto &p){
	salida << '[' << p.x << ", " << p.y << ']';
	return salida;
}
