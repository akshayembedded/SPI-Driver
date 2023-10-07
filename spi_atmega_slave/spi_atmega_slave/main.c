/*
 * spi_atmega_slave.c
 *
 * Created: 25-07-2021 17:50:42
 * Author : aksha
 */ 
#define F_CPU 80000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0xff;
	DDRB=0x40;
	PORTB=0x00;
	SPCR=0x4c;
	while (1)
	{
		SPDR='a';
		while((SPSR&(0x80))==0);
		PORTC=SPDR;
		delay(1000);
	}
}
