#include <avr/io.h>
#include <util/delay.h>

#define SW_MASK _BV(PIND7)
#define SW_PRES 1 

int main(void){
	uint8_t sw;

	DDRB |= _BV(DDB1);
	DDRB &= ~_BV(DDD7);
	PORTB &= ~_BV(PORTB1);

	while(1)
	{
		sw = (PIND & SW_MASK) >> PIND7;

		if(sw == SW_PRES)
		{
			PORTB |= _BV(PORTB1);
			_delay_ms(1000);
			PORTB &= ~_BV(PORTB1);
		}
		_delay_ms(1);
	}
	return 0;
}
