//Crear la macro MIN que devuelva el valor mínimo de enteros pasados por parámetro
#include <stdio.h>

#ifndef VAL1
#ifndef VAL2

#define VAL1 0
#define VAL2 0 

#endif 
#endif


int main (void) {
    
    int mayor = ((VAL1 > VAL2) ? VAL1 : VAL2); 
    printf ("El valor mayor: %d", mayor);
    return 0;
}
