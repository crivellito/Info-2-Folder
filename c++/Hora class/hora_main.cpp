#include <iostream>
#include "clase_hora.h"

using namespace std;

int main(){
	Hora miHora;

	miHora.establecer(17, 12, 30);

	cout << "Hora actual: ";
	miHora.imprimir();
	
	return 0;
}

