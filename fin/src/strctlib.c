#include "strctlib.h"


void strcdegistir (nesne_t *n){
	printf("isim giriniz : ");
	getchar();
	scanf("%s",(n->isim));
	printf("boyunu giriniz : ");
	getchar();
	scanf("%d",&(n->boy));
}

void strcyaz (nesne_t n){
	printf("isim : %s boy : %d\n",n.isim,n.boy);
}

