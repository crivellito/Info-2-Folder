#include <stdio.h>

int main (void) {

#ifdef TEST
    printf("El modo de prueba está activado.\n");
#endif

#ifndef TEST
    printf("El modo de prueba no está activado.\n");
#endif
    return 0;
}
