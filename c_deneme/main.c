#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char array[]="Hello World";
	int i;
	char *pointer;
	pointer=&array[0];
	char array1[11];
	for(i=0;i<15;i++){
		array1[i]=*(pointer+i);
		printf("%c",array1[i]);
	}
	printf("sizeof:%d & strlen:%d",sizeof(array),strlen(array));
	return 0;
}
