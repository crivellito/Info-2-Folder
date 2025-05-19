#include <avr/io.h>
#include <util/delay.h>

#define LED_DDR DDRD
#define LED_PORT PORTD 
#define LED_MASK 0x0F

#define DELAY_MS 500

int main(void){
	unsigned char hex = 0;
	
	LED_DDR |= LED_MASK;

	while(1){
		LED_PORT &= ~(LED_MASK);
		LED_PORT |= hex;

		if(++hex > 16)
			hex=0;
		_delay_ms(DELAY_MS);
	}
	return 0;
}
