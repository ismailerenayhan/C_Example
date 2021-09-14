#include <stdio.h>
#include <stdlib.h>

typedef union{
	char c;
	int yas;
}birlik;

int main(int argc, char **argv) {
	birlik a;
	a.yas=25;
	a.c='b';
	printf("%d",a.c);
	return 0;
}



