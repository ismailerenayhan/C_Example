#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define SIZE 10
int main(){
	int i,j,dizi[100],teksayilar[100],ciftsayilar[100];
	for(i=1;i<=SIZE;i++){
		printf("%d. Elemani Girin:",i);
		scanf("%d",&dizi[i]);
	}
	printf("\n------Tek Sayilar------\n");
	for(i=1;i<=SIZE;i++){
		if(dizi[i]%2==1){
			teksayilar[i]=dizi[i];
			printf("%d,",teksayilar[i]);
		}
	}
	for(i=1;i<=SIZE;i++){
		for(j=1;j<=SIZE;j++){
			if(teksayilar[j]>teksayilar[j+1]){
				int gecici=teksayilar[j];
				teksayilar[j]=teksayilar[j+1];
				teksayilar[j+1]=gecici;
			}
		}
	}
	printf("\n------Cift Sayilar------\n");
		for(i=1;i<=SIZE;i++){
		if(dizi[i]%2==0){
			ciftsayilar[i]=dizi[i];
			printf("%d,",ciftsayilar[i]);
		}
	}
	for(i=1;i<=SIZE;i++){
		for(j=1;j<=SIZE;j++){
			if(ciftsayilar[j]>ciftsayilar[j+1]){
				int gecici=ciftsayilar[j];
				ciftsayilar[j]=ciftsayilar[j+1];
				ciftsayilar[j+1]=gecici;
			}
		}
	}
	int sayi[100];
	for(i=1;i<=SIZE;i++){
		sayi[i]=teksayilar[i];
		sayi[i]=ciftsayilar[i];
	}
	printf("\n------Siralama------\n");
	for(i=1;i<=SIZE;i++){
		printf("\ndizi[%d]=%d\n",i,sayi[i]);
	}
	printf("\n------Dizi Elemanlari------\n");
	for(i=1;i<=SIZE;i++){
		printf("[%d]",dizi[i]);
	}
}
