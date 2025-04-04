#include <iostream>
#include "hora3.h"

using namespace std;

int main()
{
  Hora h; 

  cout << "La hora por defecto es: ";	
  h.imprimir();
    
  h.establecer(0,0,0); 
  cout << "\nLa hora después de establecer en cero es: ";
  h.imprimir();

  h.establecer(0,0,0);    
  cout << "\nDespués de intentar establecer un valor inválido: ";
  h.imprimir(); cout << endl;

  h.establecerHora(10).establecerMinuto(45).establecerSegundo(30);

    cout << "Hora: " << h.obtenerHora() << endl;
    cout << "Minuto: " << h.obtenerMinuto() << endl;
    cout << "Segundo: " << h.obtenerSegundo() << endl;

  return 0;
}
