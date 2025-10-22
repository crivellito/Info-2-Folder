#include <iostream>
using namespace std;
#include <string>

struct Persona{
	string nombre; 
	Persona *const obtiene(); //funcion miembro de la estructura
			    	   //obtiene es un puntero a funcion de tipo Persona
				};

int main(){
	Persona juan = { "Juan" };
	Persona * const p = juan.obtiene();  //puntero constante a una direccion de memoria constante
	p->nombre = "Juanito";
	cout << juan.nombre << endl;
	return 0;
}

Persona* const Persona::obtiene(){   //obtiene() es un puntero/funcion perteneciente a la clase o struct Persona. Con un tipo de retorno Persona 
	return this;
}
