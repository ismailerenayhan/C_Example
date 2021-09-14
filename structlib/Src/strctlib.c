#include "strctlib.h"


void strcdegistir (nesne_t *n){
	printf("isim giriniz : ");
	scanf("%c",&(n->isim));
	printf("boyunu giriniz : ");
	scanf("%d",&(n->boy));
}

void strcyaz (nesne_t n){
	printf("isim : %c boy : %d\n",n.isim,n.boy);
}

