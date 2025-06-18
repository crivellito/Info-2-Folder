#include <Arduino.h>
#include <stdint.h>
// Sketch: sketch_tp3.ino
/*
typedef struct {
    uint8_t bit2 : 1;     
    uint8_t bit4 : 1;
} bits;
*/

void decode (char *code) {         
        for (int i = 0; i < 100; i++) {
        char b1 = code[i] & (1 << 0x02);
        char b2 = code[i] & (1 << 0x04);
        if (b1 != b2 && code[i] != 'u') {
            code[i] ^= (1 << 0x02);
            code[i] ^= (1 << 0x04);
        }
        
    }
}

void setup () {
    Serial.begin (9600);
    pinMode (2, OUTPUT);
    pinMode (3, OUTPUT);
}

char code [100];
//int verify = 0;
//bits bits_status;

void loop () {
  while(Serial.available()){
    Serial.readBytes (code, 100);
    Serial.print ("Mensaje recibido: ");
    Serial.println (code);
    decode (code);          //, bits_status);
    Serial.println (code);
    decode (code);
    Serial.println (code);
    Serial.print("FIN");
  }
}                                         