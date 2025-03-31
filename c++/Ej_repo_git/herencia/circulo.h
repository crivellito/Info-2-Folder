#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
using namespace std;
#include <iomanip>
#include "punto.h"

class Circulo : public Punto{
	friend ostream &operator << (ostream &, const Circulo &);
	
	public: 
		Circulo( double r = 0.0, int x = 0, int y = 0);

		void estableceRadio( double );
		double obtieneRadio() const;
		double area() const;
	protected:
		double radio;
};
#endif
