#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float sayi1,sayi2,sonuc;

char deger;

int main()
{
    while(1){
	setlocale(LC_ALL, "Turkish");

	printf("Sayý hesaplayýcý\n Toplama iþlemi için + ya basýnýz.\n Çýkarma iþlemi için - ye basýnýz.\n Çarpma iþlemi için * ya basýnýz.\n Bölme iþlemi için / ye basýnýz.\n");

	printf("Lütfen 1. sayýyý giriniz.\n");
	scanf("%f",&sayi1);
	printf("Lütfen 2. sayýyý giriniz.\n");
	scanf("%f",&sayi2);

	printf("Yapmak istediðiniz iþlemin sembolünü giriniz");
	scanf("%s",&deger);


	if(deger == '+'){
		sonuc=sayi1+sayi2;
		printf("Ýþlem sonucunuz,%f",sonuc);
	}
	else if(deger=='-'){
		sonuc=sayi1-sayi2;
		printf("Ýþlem sonucunuz,%f",sonuc);
	}
	else if(deger=='*'){
		sonuc=sayi1*sayi2;
		printf("Ýþlem sonucunuz,%f",sonuc);
	}
	else if(deger=='/'){
		sonuc=sayi1/sayi2;
		printf("iþlem sonucunuz,%f",sonuc);
	}
	else{
		printf("Lütfen geçerli bir iþlem giriniz");
	}
    }

	return 0;
	}
