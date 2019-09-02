#include <msp430.h> 

#define relay 0x01
unsigned int i;

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;
	P1DIR |=relay;

	while(1)
	{
	    P1OUT |=relay;
	    for(i=0;i<20000;i++);
	    P1OUT &=~relay;
	    for(i=0;i<20000;i++);
	}
}
