#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define s 10
int main(){
	int i,j;
	float toplam=0,dizi[100],aritmetikortalama,varyans[100],ustelsonuc=0;
	for(i=1;i<=s;i++){
		printf("Dizi Sayilarini Giriniz:");
		scanf("%f",&dizi[i]);
		toplam+=dizi[i];
	}
	aritmetikortalama=toplam/s;
	for(i=1;i<=s;++i){
		for(j=1;j<=s;++j){
			varyans[j]=aritmetikortalama-dizi[i];
			ustelsonuc+=pow(varyans[j],2);
		}
	}
	printf("%.2f,",ustelsonuc);
}


