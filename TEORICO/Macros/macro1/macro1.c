//Macro con valor definido desde la compilacion condicional. Defino su valor desde la terminal con -D<nombre>=<valor>
//
//
#include <stdio.h>


int main (void) {

#ifdef NUM                            //ifdef para comprobar si al compilar se definió NUM.   
    printf("NUM esta definido\n");
    printf("NUM vale: %d\n", (NUM));
#endif                                //fin del bloque condicional que comprueba si NUM está definido.

#ifndef NUM                           //ifndef para comprobar si al compilar NO definió NUM.
    printf("NUM no esta definido\n"); 
#endif                                //necesario para indicar que el bloque de código es condicional.
    return 0;
}
