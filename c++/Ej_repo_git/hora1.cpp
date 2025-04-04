#include "hora1.h"
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

