#include <iostream>
#include "punto.h"
#include "circulo.h"
#include <iomanip>

using namespace std;

int main(){
	Punto *ptrPunto = 0, p(30,50);
	Circulo *ptrCirculo = 0, c(2.7 , 120 , 89);
	
	cout << "Punto p: " << p << "\nCirculo c: " << c "\n";

	ptrPunto = &c;
	cout << "\nCirculo c (mediante *ptrCirculo) : \n" << *ptrCirculo << "\nArea de c (mediante ptrCirculo): " << ptrCirculo ->area() << "\n";
	ptrPunto = &p;
	ptrCirculo = static_cast <Circulo *> (ptrPunto);
	cout << "\nPunto p (*ptrCirculo):\n "<< *ptrCirculo << "\nArea del objeto ptrCirculo apunta a:" << ptrCirculo ->area() << endl;	
	return 0;
}
