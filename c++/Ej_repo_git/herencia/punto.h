#ifndef PUNTO_H 
#define PUNTO_H   

class Punto {
	public: 
		Punto(double = 0.0, double = 0.0);
		void establecerPunto(double,double);
		double obtenerX() const { return x; }
		double obtenerY() const { return y; }
		void imprimir() const;
	protected:
		double x, y;
};

#endif		
