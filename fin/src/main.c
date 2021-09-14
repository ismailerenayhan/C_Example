#include <stdio.h>
#include "strctlib.h"
FILE *dosya;

int main(int argc, char **argv) {
	nesne_t abc[3];
	int i;
	for (i = 0; i < 3; i++) {
		strcdegistir(&abc[i]);
		strcyaz(abc[i]);
	}
	char dizi[45];
	dosya=fopen("new.txt","w");
	for(i=0;i<3;i++){
		sprintf(dizi,"%s %d\n",abc[i].isim,abc[i].boy);
		fprintf(dosya,"%s",dizi);
	}
	fclose(dosya);
	char strin[100];
	dosya=fopen("new.txt","r");
	fread(&strin,100,1,dosya);
	printf("%s",strin);
	return 0;
}



