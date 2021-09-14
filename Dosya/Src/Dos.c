#include "Dos.h"

void dosyaoku(void){
	dosya=fopen("new.txt","r+");
	char str[45];
	do{
		fgets(str,45,dosya);
		printf("%s",str);
		fseek(dosya,-1,SEEK_CUR);
	}
	while(fgetc(dosya)=='\n');
	fclose(dosya);
}

void dosyayaz(char str[]){
	dosya=fopen("new.txt","r+");
	fprintf(dosya,str);
	fclose(dosya);
}
