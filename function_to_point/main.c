#include <stdio.h>
#include <stdlib.h>

int topla(int a,int b){
	return a+b;
}

int main(int argc, char **argv) {
	int (*fp)(int x,int y);
	fp=topla;
	printf("%d\n",fp(55,44));
	printf("The main function location is %p",main);
	return 0;
}



