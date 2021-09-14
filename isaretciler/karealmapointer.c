#include <stdio.h>

int kareal(int a);

int main(){
	int sayi,karesi,devam;
	devam=0;
	while(devam<1){
		scanf("%d",&sayi);
		printf("\nsayi=%d",sayi);
		karesi=kareal(sayi);
		printf("\nkaresi=%d",karesi);
		printf("\ndevam etmek icin a tusuna basiniz\n");
		scanf("%c",&devam);
	}
	return 0;
}


int kareal(int a){
	int b;
	b=a*a;
	return b;
}
