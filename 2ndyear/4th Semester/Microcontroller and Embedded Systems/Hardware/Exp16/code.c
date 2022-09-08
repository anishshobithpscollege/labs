#include <LPC214X.H>
#define DIG1 (1<<16)

unsigned char dig[] = {0x88,0xeb,0x4c,0x49,0x2b,0x19,0x18,0xcb,
0x8,0x9,0x38,0x9c,0x68,0x1c,0x1e};

void delay () {
	unsigned int j = 0, i = 0;
	for (i=0; i<4000000;i++)
		j++;
}

int main() {
	int count;
	IO0DIR = 0XFFFFFFFF;
	while(1) {
		for (count = 0; count < 16; count++) {
			IO0CLR = 0X007F8000;
			IO0SET = (dig[count] << 15);
			IO0SET = DIG1;
			delay();
		}
	}
}
