#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>


int main(void){

	unsigned char portA M,N,P,Q;

	DDRA = 0x00;
	DDRB = 0b00001111;
	DDRC = 0b11110000;

	while(1){
		P=PINA;
        Q=PINA;
        M=P>>4;
        N=Q>>4;
		PORTB = M;
		PORTC = N;

		_delay_ms(1000);
	}

}
