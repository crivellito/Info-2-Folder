#include <iostream>
using namespace std;
#include <string>

class Persona{
	string nombre;
	
	public:
		Persona(string n) : nombre(n) {}	
		Persona* const obtiene();
		string getNombre() const{
			return nombre;
		}
		void Persona::setNombre(string nuevoNombre){
			nombre = nuevoNombre;
		}
};

//implementacion del metodo obtiene

Persona* const Persona::obtiene(){
	return this;
}



int main(){
	Persona juan = {"Juan"};
	Persona * const p = juan.obtiene();  //puntero constante a una direccion de memoria constante
	p->setNombre() = {"Juanito"};
	cout << juan.getNombre() << endl;
	return 0;
}

