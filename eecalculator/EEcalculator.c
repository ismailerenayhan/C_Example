#include<stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){

int a=0;

setlocale(LC_ALL, "Turkish");
printf("\n\n			-------------------Powerd by �smail Eren AYHAN-------------------\n\n");

printf("Hesaplamak istedi�in ��eyi se�\n\n");
printf("	seri-paralel diren�=>	1   \n\n	empedans=>		2 \n\n	kapasite=>		3  \n\n	kapasit�r=>		4  \n\n	ind�ktans=>		5  \n\n	ind�ksiyon emk'si=>	6  \n\n");

scanf("%d", &a);

if(a==1){
	seriparalel();

}
if(a==2){
	empedans();

}
if(a==3){
	kapasite();

}
if(a==4){
	kapasitor();

}
if(a==5){
	induktans();

}
if(a==6){
	indemk();

}




  return 0;





}


int seriparalel()
{
	char onay;
	printf("\n\n					Seri-Paralel Diren� Hesaplamas�");
	printf("seri ise s paralel ise p ye bas�n�z\n\n");
	onay=getche();
	printf("\n\n");
	if(onay==115||onay==112){
		if(onay==115){
			printf("ka� tane seri diren� kullanacaks�n");
		}
		if(onay==112){
			printf("ka� tane paralel diren� kullanacaks�n");
		}
	}

  return 0;
}
int empedans()
{

	printf("RLC devrelerinde E�de�er Empedans�n Hesaplanmas�");


  return 0;
}
int kapasite()
{

	printf("");


  return 0;
}



int kapasitor()
{

	printf("Seri-Paralel E�de�er Kapasitenin Hesaplanmas�");


  return 0;
}


int induktans()
{
	float gec;
	float uzun;
	float sarim;
	float kesit;
	float sonuc;
	printf("\n\n			Bir Bobinin �nd�ktans Hesab� ");
	printf("\n\nS�ras�yla ,N�venin Manyetik Ge�irgenli�ini, Tel Uzunlu�unu, Sar�m Say�s�n�n� ve Bobinin Kesit Alan�n� Giriniz ");
	scanf("\n%f", &gec);
	scanf("\n%f", &uzun);
	scanf("\n%f", &sarim);
	scanf("\n%f", &kesit);
	sonuc=gec*sarim*sarim*kesit/uzun;
	printf("%f",sonuc);

  return 0;
}


int indemk()
{

	printf("Bir Bobinde End�klenen Emk'n�n Hesaplanmas� ");


  return 0;
}




