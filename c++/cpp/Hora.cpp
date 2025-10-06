#include <iostream>

using stdout;

class Hora {
  public:         //se pueden poner varios public y varios privados (CONCEPTO DE ENCAPSULAMIENTO)
    Hora();       //constructor
    void imprimir();
    void establecer (int, int, int);
  private:        //especificador de acceso a miembros 
  int hora;
  int minuto;
  int segundo;
};

class Fecha {
  public:
    Fecha();
    void establecer();
    void imprimir();
  private:
    int dia;
    int mes;
    int anio;
};


int main() {
  Hora h;
  cout << "la hora es ";
  f.imprimir;
  return 0;
}

//PERTENENCIA DE FUNCIONES

void Hora::imprimir () {          //embolsa la funcion a la clase hora
    cout << hora << ":" << minuto << ":" segundo;
}

void Hora::establecer(int h, int m, int s) {
  hora //condiciones de hora 
  minutos = //condiciones
  // ...
}

void Hora::imprimir (


void Fecha::imprimir () {
    cout << dia << "/" << mes << "/" << anio;
}

Hora::Hora () {
  hora = minuto = segundo = 0;
}

Fecha::Fecha () {
   



