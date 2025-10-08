#include <stdio.h>


int main (void) {

    #ifdef NUM
      printf("esta definido num\n");
    #endif
    #ifndef NUM
      printf("no esta definido num\n");
    #endif 

    return 0;
}
      
