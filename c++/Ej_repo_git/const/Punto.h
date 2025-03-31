#ifndef Punto_h
#define Punto_h

class Punto {
	private:
    		int x;
    		int y;

	public:
    		// Constructor para inicializar x e y
    		Punto(int x_valor, int y_valor) : x(x_valor), y(y_valor) {}

    		// Función miembro constante que devuelve el valor de x
    		int obtenerX() const;

    		// Función miembro constante que devuelve el valor de y
    		int obtenerY() const;

    		// Función no constante que puede modificar los valores
    		void moverPunto(int nuevo_x, int nuevo_y);
};


#endif
