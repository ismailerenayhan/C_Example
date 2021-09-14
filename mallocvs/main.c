#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t i;

int main(int argc, char *argv[]) {
	char *a;
	a=malloc(27);
	for(i=0;i<26;i++){
		a[i]=65+i;
		printf("%c",a[i]);
	}
	free(a);
	return 0;
}
