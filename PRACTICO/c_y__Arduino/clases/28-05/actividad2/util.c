#include <stdio.h>
#include <stdbool.h>


void setBit (int bit_num, unsigned char *caracter) {
    *caracter |= (1<<bit_num); 
}

void resetBit (int bit_num, unsigned char *caracter) {
    *caracter ^= (1<<bit_num);
}

bool getBit(int bit_num, unsigned char *caracter) {
    if (*caracter & (1<<bit_num)) return 1;
    else return 0;
}

void deencrypt (int largo, char *str){

    for (int i=0 ; i<strlen ; i++){

          
