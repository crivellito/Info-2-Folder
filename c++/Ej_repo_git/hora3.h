#ifndef HORA3_H
#define HORA3_H

class Hora{
  public:
    Hora(); 			// Constructor
    
    void establecer(int , int , int );

    void imprimir(); 		// Formato: 13:15:00
   
    int establecerHora(int );   
    int establecerMinuto(int ); 
    int establecerSegundo(int );
    
   
    int obtenerHora();
    int obtenerMinuto();
    int obtenerSegundo( );	   

  private:
    int hora;    // 0 - 23
    int minuto;  // 0 - 59
    int segundo; // 0 - 59
};
# endif


