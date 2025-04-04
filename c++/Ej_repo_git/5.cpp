#include <iostream>
#include "hora1.h"

using namespace std;

int main()
{
  Hora h;     // Instancia el objeto h de la clase Hora

  cout << "La hora por defecto es: ";
  h.imprimir();
    
  h.establecer(0,0,0);
  cout << "\nLa hora después de establecer es: ";
  h.imprimir();

  // Intenta establecer un valor inválido de Hora
  h.establecer(0,0,0);    
  cout << "\nDespués de intentar establecer un valor inválido: ";
  h.imprimir();
  cout << endl;

// Usando los setters (funciones set) para establecer los valores
    h.establecerHora(10);
    h.establecerMinuto(45);
    h.establecerSegundo(30);

    // Usando los getters (funciones get) para obtener los valores y mostrarlos
    cout << "Hora: " << h.obtenerHora() << endl;
    cout << "Minuto: " << h.obtenerMinuto() << endl;
    cout << "Segundo: " << h.obtenerSegundo() << endl;

  return 0;
}
