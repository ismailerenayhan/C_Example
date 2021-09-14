#include <stdio.h>
#include <stdlib.h>
struct ozel{
	char renk[20];
	int model;
	int fiyat;
};
void yazdir(struct ozel buf);
char *strdondur(char str[]);

int main(int argc, char *argv[]) {
	system("COLOR 2");
	struct ozel yeni={.renk="Mavi",.model=2005,.fiyat=10};
	char dizi[]="Hello World";
	yazdir(yeni);
	printf("\n%s",strdondur(dizi));
	return 0;
}
void yazdir(struct ozel buf){
	printf("Renk : %s Model : %d Fiyat : %d",buf.renk,buf.model,buf.fiyat);
}

char *strdondur(char str[]){
	return str;
}
