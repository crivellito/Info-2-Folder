main.c 
//es el programa principal

include "saludo.h" 
//incluye el cabecera que esta en la misma carpeta con las declaraciones de las funciones que main usa.

gcc -static main.c ./lib/libsaludo.a 
//compila y linquea estáticamente main.c con la lib de saludo. esta es la que contiene los binarios de la libreria completa

nm libsaludo.a 
//muestra los binarios contenidos en dicha biblioteca. especificando otros valores que por ahora desconozco supongo que el tamaño en bites de cada binario por separado de las funciones.
