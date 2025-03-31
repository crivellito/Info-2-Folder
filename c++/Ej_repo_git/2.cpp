#include <iostream>
using namespace std;

int main(void){
	int entero;
	float flotante;
	double doble;

	cout << "Ingrese el numero entero\n " << endl;
	cin >> (entero);	

	cout << "Ingrese el numero flotante\n " << endl;
	cin >> (flotante);

	cout << "Ingrese el numero doble\n " << endl;
	cin >> (doble);

	cout << "Los valores ingresados son: \n";
	
	cout << "Int: " << entero << "\nFloat: " << flotante << "\nDouble: " << doble << endl;	

	return 0;
}
