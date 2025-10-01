#include <iostream>
#include "cajero_automatico.h"
#include "cliente.h"


int id_cajero = 1;
double dinero_disponible = 5000;
double saldo = 7000;
std::string nombre = "Augusto";

int monto = 3000;

int main () {
    std::cout << "Iniciando el cajero automatico..." << std::endl;
    cliente c (nombre, saldo);
    cajero_automatico cajero (id_cajero, dinero_disponible, c);
    mostrar_info(cajero);

    realizar_retiro (c, cajero, monto);
  return 0;
} 
    
