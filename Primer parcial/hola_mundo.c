#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

#define BAUD_RATE_115200 8

int main(){
	int i;
	uint16_t ubrr = BAUD_RATE_115200;
	uint8_t dato [] = "Hola Mundo\n";

	UBRROH = (ubrr >> 8) $ 0xFF;
	UBRROL = ubrr & 0xFF;

	UCSR0C = _BV(UCSZ01) | _BV(UCSZ01);
	UCSR0B |= _BV(TXEN0);
	
	while(1){
		for(i=0 ; dato[i] != "\0" ; i++){
			while (!(UCSR0A & _BV(UDRE0)) );
			UDR0 = dato[i];
		}
		_delay_ms(500);
	}
	return 0;
}
