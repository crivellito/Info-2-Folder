#include "hora3.h"
#include <iostream>
using namespace std;


Hora::Hora(){
	hora = minuto = segundo = 0;
}



void Hora::establecer(int h, int m, int s){
    do{
        cout << "\nIngrese la hora" << endl;
        cin >> h;
    }while (h > 24 || h < 0);

    do{
        cout << "\nIngrese los minutos" << endl;
        cin >> m;
    }while (m > 60 || m < 0);

    do{
        cout << "\nIngrese los segundos" << endl;
        cin >> s;
    }while (s > 60 || s < 0);

    hora = h;
    minuto = m;
    segundo = s;
}



void Hora::imprimir(void){
    if ((hora > 24 || hora < 0) || (minuto > 60 || minuto < 0) || (segundo > 60 || segundo < 0))
	    cout << "Hora no valida";
    else 
	    cout << "La hora es: " << hora << ":" << minuto << ":" << segundo;
}


//implementacion de los setter



Hora & establecerHora(int h){
    if (h >= 0 && h < 24) {
	this->hora = h;
	return *this;
    } else {
        hora = 0;  // Valor por defecto si es inválido
    }
}

Hora& establecerMinuto(int m){
    if (m >= 0 && m < 60) {
        this->minuto = m;
	return *this;
    } else {
        minuto = 0;  // Valor por defecto si es inválido
    }
}

Hora& establecerSegundo(int s){
    if (s >= 0 && s < 60) {
        this->segundo = s;
	return *this;
    } else {
        segundo = 0;  // Valor por defecto si es inválido
    }
}



// Implementación de los getters



int Hora::obtenerHora(){
    return hora;
}

int Hora::obtenerMinuto(){
    return minuto;
}

int Hora::obtenerSegundo(){
    return segundo;
}
