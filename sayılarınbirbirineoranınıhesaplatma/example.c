#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
int main(){
	setlocale(LC_ALL, "Turkish");
	
	float s1;
	float s2;
	float s3;
	float s4;
	float s5;
	float toplam;
	float so1;
	float so2;
	float so3;
	float so4;
	float so5;

	
	printf("1.sayýyý giriniz : ");
	scanf("\n\n%f",&s1);
	
	
	printf("2.sayýyý giriniz : ");
	scanf("\n\n%f",&s2);
	
	
	printf("3.sayýyý giriniz : ");
	scanf("\n\n%f",&s3);
	
	
	printf("4.sayýyý giriniz : ");
	scanf("\n\n%f",&s4);
	
	
	printf("5.sayýyý giriniz : ");
	scanf("\n\n%f",&s5);
	
	toplam=s1+s2+s3+s4+s5;
	so1=s1/toplam*100;
	so2=s2/toplam*100;
	so3=s3/toplam*100;
	so4=s4/toplam*100;
	so5=s5/toplam*100;
	printf("Birinci sayýnýn diðerlerine oraný yüzde %f\n\n",so1);
	printf("Ýkinci sayýnýn diðerlerine oraný yüzde %f\n\n",so2);
	printf("Üçüncü sayýnýn diðerlerine oraný yüzde %f\n\n",so3);
	printf("Dördüncü sayýnýn diðerlerine oraný yüzde %f\n\n",so4);
	printf("Beþinci sayýnýn diðerlerine oraný yüzde %f\n\n",so5);
	int a;
	scanf("%d",&a);
	
return 0;
}

