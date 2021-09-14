#include<stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){

int a=0;

setlocale(LC_ALL, "Turkish");
printf("\n\n			-------------------Powerd by Ýsmail Eren AYHAN-------------------\n\n");

printf("Hesaplamak istediðin öðeyi seç\n\n");
printf("	seri-paralel direnç=>	1   \n\n	empedans=>		2 \n\n	kapasite=>		3  \n\n	kapasitör=>		4  \n\n	indüktans=>		5  \n\n	indüksiyon emk'si=>	6  \n\n");

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
	printf("\n\n					Seri-Paralel Direnç Hesaplamasý");
	printf("seri ise s paralel ise p ye basýnýz\n\n");
	onay=getche();
	printf("\n\n");
	if(onay==115||onay==112){
		if(onay==115){
			printf("kaç tane seri direnç kullanacaksýn");
		}
		if(onay==112){
			printf("kaç tane paralel direnç kullanacaksýn");
		}
	}

  return 0;
}
int empedans()
{

	printf("RLC devrelerinde Eþdeðer Empedansýn Hesaplanmasý");


  return 0;
}
int kapasite()
{

	printf("");


  return 0;
}



int kapasitor()
{

	printf("Seri-Paralel Eþdeðer Kapasitenin Hesaplanmasý");


  return 0;
}


int induktans()
{
	float gec;
	float uzun;
	float sarim;
	float kesit;
	float sonuc;
	printf("\n\n			Bir Bobinin Ýndüktans Hesabý ");
	printf("\n\nSýrasýyla ,Nüvenin Manyetik Geçirgenliðini, Tel Uzunluðunu, Sarým Sayýsýnýný ve Bobinin Kesit Alanýný Giriniz ");
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

	printf("Bir Bobinde Endüklenen Emk'nýn Hesaplanmasý ");


  return 0;
}




