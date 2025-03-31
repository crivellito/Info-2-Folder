#include <iostream>

using namespace std;

int cuadrado(int x) {return x * x; }

double cuadrado(double y) {return y * y;}

int main(){
	cout << "El cuadrado del entero 7 es " << cuadrado(7) << endl << "El cuadrado del double 7..5 es: " << cuadrado(7.5) << endl;
	return 0;
}
