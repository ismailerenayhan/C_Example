#include "deneme.h"

void yaz(char* string,char chr){
	char i=0;
	while(*(string+i)!='\0'){
		if(*(string+i)==chr){
			printf("%c",*(string+i));
			printf("\n");
		}
		else{
			printf("%c",*(string+i));
		}
		i++;
	}
}
