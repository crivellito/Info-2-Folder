#ifndef HORA_H
#define HORA_H

class Hora{ 	
	public: 
		Hora(); 	//CONSTRUCTOR ////Funciones miembro:
		void establecer(int,int,int);
		void imprimir ();

	private: 
		//MIEMBROS DE DATOS PRIVATE
		int hora;
		int minuto;
		int segundo;
};
#endif
