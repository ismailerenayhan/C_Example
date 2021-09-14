#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv) {
	uint8_t a=65;
	uint8_t b=225;
	uint16_t c=(b|b);
	printf("Hello World %d %d",c,(a<<1));
	return 0;
}



