#include "lib.h"

void chrprint(char *chr){
	printf("%s\n",chr);
}

void strprint(struct kitap kit){
	printf("%s  %d  %d\n",kit.isim,kit.puan,kit.sayfasayisi);
}

void strdoldur(struct kitap *ptr){
	printf("lutfen isim giriniz\n");
	scanf("%s",ptr->isim);
	printf("lutfen puan giriniz\n");
	scanf("%d",&(ptr->puan));
	printf("lutfen sayfa sayisini giriniz\n");
	scanf("%d",&(ptr->sayfasayisi));
}
