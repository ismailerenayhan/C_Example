#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float sayi1,sayi2,sonuc;

char deger;

int main()
{
    while(1){
	setlocale(LC_ALL, "Turkish");

	printf("Say� hesaplay�c�\n Toplama i�lemi i�in + ya bas�n�z.\n ��karma i�lemi i�in - ye bas�n�z.\n �arpma i�lemi i�in * ya bas�n�z.\n B�lme i�lemi i�in / ye bas�n�z.\n");

	printf("L�tfen 1. say�y� giriniz.\n");
	scanf("%f",&sayi1);
	printf("L�tfen 2. say�y� giriniz.\n");
	scanf("%f",&sayi2);

	printf("Yapmak istedi�iniz i�lemin sembol�n� giriniz");
	scanf("%s",&deger);


	if(deger == '+'){
		sonuc=sayi1+sayi2;
		printf("��lem sonucunuz,%f",sonuc);
	}
	else if(deger=='-'){
		sonuc=sayi1-sayi2;
		printf("��lem sonucunuz,%f",sonuc);
	}
	else if(deger=='*'){
		sonuc=sayi1*sayi2;
		printf("��lem sonucunuz,%f",sonuc);
	}
	else if(deger=='/'){
		sonuc=sayi1/sayi2;
		printf("i�lem sonucunuz,%f",sonuc);
	}
	else{
		printf("L�tfen ge�erli bir i�lem giriniz");
	}
    }

	return 0;
	}
