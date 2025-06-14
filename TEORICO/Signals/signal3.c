#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

unsigned int flag = 1;
void handler (int);
void secondHandler (int);

int main (void) {
    
    signal (2, handler);
    printf ("\nOut of the loop ");

    while (flag) {
        printf("\nInside of the loop... \n");
        sleep (2);
        if (flag == 1){
          printf("\nYou would never get rid of it idiot!");
          printf("\nNot true, press Ctrl + Z to exit\n");
        }
        signal (20, secondHandler); 
    }
    printf("\nOut of the loop, signal received!\n");
    return 0;
}        

void handler (int sig) { 
    flag = 1;
}

void secondHandler (int sig) {
    flag = 0;
}
