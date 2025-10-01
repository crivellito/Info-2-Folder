#ifndef CAJERO_AUTOMATICO_H
#define CAJERO_AUTOMATICO_H
#include "cliente.h"
#include <iostream>

class cajero_automatico : public cliente {
  
  private:
    int id_cajero;
    double dinero_disponible;
    
  public:
    friend void mostrar_info (cajero_automatico& cajero);
    /*  friend void mostrar_info (std::string nombre, double saldo);  */
    friend void realizar_retiro (cliente& cliente, cajero_automatico& cajero, int monto);

    cajero_automatico (int id, double d, cliente& c) : cliente(c) { 
      id_cajero = id;
      dinero_disponible = d;
    }
};


void mostrar_info (cajero_automatico& cajero) {
  std::cout << "ID del cajero: " << cajero.id_cajero << std::endl;
  std::cout << "Dinero disponible: " << (cajero.dinero_disponible ? "Sí" : "No") << std::endl;
  std::cout << "------------------------" << std::endl;
}

void realizar_retiro (cliente& cliente, cajero_automatico& cajero, int monto) {

  if (cajero.dinero_disponible < monto) {
    std::cout << "El cajero no tiene suficiente dinero disponible." << std::endl;
    return;
  } else if (cliente.saldo < monto) {
    std::cout << "El cliente no tiene suficiente dinero, seco." << std::endl;
    return;
  } else {
    cliente.saldo -= monto;
    cajero.dinero_disponible -= monto;
    std::cout << "Retiro exitoso de " << monto << std::endl;
  }
}
*/

/*
  friend void mostrar_info (std::string nombre, double saldo) {
  std::cout << "Nombre del cliente: " << nombre << std::endl;
  std::cout << "Saldo del cliente: " << saldo << std::endl;
  std::cout << "------------------------" << std::endl;
}
*/



#endif


