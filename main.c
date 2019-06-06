/*
 * LEDsseq2.c
 *
 * Created: 04/06/2019 14:56:26
 * Author : Ad
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD=0b11111111;
	while(1)
	{
		PORTD=0x55;
		_delay_ms(1000);
		PORTD=0x00;
		_delay_ms(1000);
		PORTD=0xAA;
		_delay_ms(1000);
		PORTD=0x00;
	}
}

