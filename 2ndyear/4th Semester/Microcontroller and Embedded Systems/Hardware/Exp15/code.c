#include <LPC214X.H>

__irq void Ext_ISR(void) {
	IO1DIR |= 0XFF000000;
	IO1PIN ^= 0X01000000;
	EXTINT |= 0X4;
	VICVectAddr = 0;
}

void init_ext_interrupt() {
	EXTMODE = 0X4;
	EXTPOLAR &= ~(0X4);
	PINSEL0 = 0X0000C000;
	
	VICIntSelect &= ~(1<<16);
	VICVectAddr5 = (unsigned int)Ext_ISR;
	VICVectCntl5 = (1<<5)|16;
	VICIntEnable = (1<<16);
	EXTINT &=~(0x4);
}

int main() {
	init_ext_interrupt();
	while(1) {
		}
	}
