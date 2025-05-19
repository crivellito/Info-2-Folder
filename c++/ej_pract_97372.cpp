#include <iostream>
#include <string>

class Pelicula{
     
	Pelicula(string title, string director, int duracion) : (director = "Desconodido", duracion = 0) {};
	Pelicula(string title, string director, int duracion) {};
   
   public:
		void mostrarInformacion const();
		void agregarPelicula (string, string, int);	
   protected:
		string titulo;
		string director;
		int duracion;	
};

Pelicula :: void agregarPelicula(string name,string direct,int min){
	this->titulo = name;
	this->director = direct;
	this->duracion = min;
}

Pelicula :: void mostrarInformacion const(){
	string nombre;
	string director;
	int duracion;
	this->titulo = nombre;
	this->director = director;
	this->duracion = duracion;
	cout << nombre << "  " << director << "  " << duracion "\n";
}
			
int main (){
	
	Pelicula peli1;
	peli1.Pelicula("volver al futuro");
	cout << "Pelicula con primer constructor";
	cout << peli1.titulo << "  " << peli1.director << "  " << peli1.duracion "\n";
	cout << "Pelicula con segundo constructor";
	peli2.Pelicula("Motalvano", "pepe", 40);
	cout << peli1.titulo << "  " << peli1.director << "  " << peli1.duracion "\n";
}	
	
