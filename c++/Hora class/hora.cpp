#include <iostream>
#include "clase_hora.h"

using std::cout;
using std::cin;

Hora::Hora(){
	hora = minuto = segundo = 0;
}

//Establece un nuevo valor de Hora

void Hora::establecer(int h, int m, int s){
	cout << ("Ingrese una hora papilo \n");
	cin >> hora;
	cout << ("Ingresa los minutos \n");
	cin >> minuto;
	cout << ("Ingrese los segundos \n");
	cin >> segundo;
}

void Hora::imprimir(){
	cout << ("La hora es: ") << hora << (":") << minuto << (":") << segundo;
}

