#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void degistir(char str[]);

char string[]="Hello World";
int main(int argc, char *argv[]) {
	degistir(string);
	printf("%s",string);
	return 0;
}


void degistir(char str[]){
	uint8_t i;
	char *pot;pot=&str[0];int length=strlen(str);
	for(i=0;i<length;i++){
		*(++pot);
		*pot=(*pot+1);
	}
}
