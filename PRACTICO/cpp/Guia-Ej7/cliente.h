#ifndef CLIENTE_H
#define CLIENTE_H

class cliente {
  private:
    std::string nombre;
    double saldo;

  public:
    cliente(std::string n, double s) {
      nombre = n;
      saldo = s;
    }
};

#endif
