#include <stdio.h>

int main (void){

    #ifdef DEBUG
    printf("DEBUG ACTIVADO\n");
    #endif
    #ifndef DEBUG
    printf("NODEBUG ACTIVADO\n");
    #endif
    return 0;
}
