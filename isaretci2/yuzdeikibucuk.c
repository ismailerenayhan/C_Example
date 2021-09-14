#include<stdio.h>

void yuzdeikibucuk(float *value);

int main(){
	float sayi;
	char devam='a';
	while(devam=='a'||devam=='A'){
		printf("yuzde iki bucukunu bulmak istediðiniz sayiyi giriniz\n");
		scanf("%f",&sayi);
		yuzdeikibucuk(&sayi);
		printf("cevap %.2f\n",sayi);
		printf("devam etmek icin A ya basiniz\n");
		devam=getch();
		printf("\n");
	}
	
}

void yuzdeikibucuk(float *value){
	float deg=(*value)/100*2.5;
	*value=deg;
}
