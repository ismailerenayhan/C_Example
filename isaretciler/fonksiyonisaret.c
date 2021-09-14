#include<stdio.h>

int adres(int A[],int a);

int main(){
	
	int dizi[10]={4,15,78,14,45,56,67,98,79,10};
	int *q;
	q = adres(dizi,10);
	printf("dizinin en kucuk elamani =%d\n",q);
	printf("dizinin en kucuk elamanýnýn degeri =%p\n",*q);
	
	return 0;
}

int adres(int A[],int a){
	
	int enkucuk,*p,i;
	enkucuk=A[0];
	p=&A[0];
	for(i=1;i<a;i++){
		if(A[i]<enkucuk){
			enkucuk=A[i];
			p=&A[i];
		}
	}
	return p;
}
