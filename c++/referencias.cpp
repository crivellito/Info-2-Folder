#include <iostream>
using std::cout;
using std::cin;


int cuadradoPorValor(int); void cuadradoPorReferencia(int &);

int cuadradoPorValor(int a){
	return a *= a;
}

void cuadradoPorReferencia(int &refCuenta){
	refCuenta *= refCuenta;
}



int main (void){
	int cuenta = 2;
	int &refCuenta = cuenta;
	cuadradoPorValor(cuenta);
	cout << ("Por valor ") << cuenta << ("\n");
	++refCuenta;	
	cuadradoPorReferencia(refCuenta);
	cout << ("Por referencia ") << refCuenta << std::endl;
	return 0;
}
