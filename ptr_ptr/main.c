#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	char *p1;
	char **p2;
	char *str[10];
	*str="Deneme";
	p1="Hello World";
	p2=&p1;
	printf("%s\n",*p2);
	printf("%s",*str);
	return 0;
}



