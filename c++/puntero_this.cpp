#include <iostream>
using namespace std;

struct Persona{
	string nombre; 
	Persona * const obtiene(); //funcion miembro de la estructura
			    	   //obtiene es un puntero a funcion de tipo Persona
};

int main(){
	Persona juan = { "Juan" };
	Persona * p;
	p = juan.obtiene();
	p->nombre = "Juanito";
	cout << juan.nombre << endl;
	return 0;
}

Persona* const Persona::obtiene(){   //obtiene() es un puntero/funcion perteneciente a la clase o struct Persona. Con un tipo de retorno Persona 
	return this;
}
