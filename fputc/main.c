#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <conio.h>
char i;
int main(int argc, char *argv[]) {
	FILE *dosya;
	dosya=fopen("dosya.c","w");
	/////////////////////////////////
	char str[]="Hello World";
	for(i=0;str[i]!='\0';i++){
		fputc(str[i],dosya);
	}
	/////////////////////////////////
	fputc('\n',dosya);
	/////////////////////////////////
	for(i=0;i<strlen(str);i++){
		fputc(str[i],dosya);
	}
	/////////////////////////////////
	fprintf(dosya,"\nMerhaba Dunya");
	/////////////////////////////////
	fclose(dosya);
	dosya=fopen("dosya.c","r");
	char a;
	i=0;
	while((a = fgetc(dosya))!=EOF){
		printf("%c",a);
		i++;
	}
	/////////////////////////////////
	printf("%d",i);
	fclose(dosya);
	
	return 0;
}
