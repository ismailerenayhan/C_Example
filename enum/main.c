#include <stdio.h>
#include <stdlib.h>

typedef enum{
	ilkb,yaz,sonb,kis
}mevsim;


int main(int argc, char **argv) {
	char a=yaz;
	if(a == yaz){
		printf("Mevsim yaz");
	}
	printf("%c",yaz);
	return 0;
}


