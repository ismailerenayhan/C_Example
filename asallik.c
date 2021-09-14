#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t sayi,i,kontrol;
int main(){
	while (1)
	{
		printf("Lutfen sayi giriniz\n");
		scanf("%d",&sayi);
		for(i=2;i<sayi;++i){
			if(sayi%i==0){
				kontrol++;
			}
		}
		printf("\n");
		if(kontrol>0){
			printf("asal degil");
		}
		else{
			printf("asal");
		}
		printf("\n");
		kontrol=0;
	}
	return 0;
}
