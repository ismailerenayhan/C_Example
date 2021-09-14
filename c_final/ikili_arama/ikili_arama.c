#include <stdio.h>
#include <stdlib.h>

int main(){
	int bulundu=0;
	int konum=5;
	int ilk_indis=0;
	int son_indis=10;
	int aranan;
	int dizi[10]={0,1,2,3,4,5,6,7,8,9};
	printf("aranan harfi yaziniz\n");
	scanf("%d",&aranan);
	while(ilk_indis<=son_indis){
		konum=(ilk_indis+son_indis)/2;
		if(aranan>dizi[konum]){
			ilk_indis=konum+1;
		}	
		else if(aranan<dizi[konum]){
			son_indis=konum-1;
		}
		else if(aranan==dizi[konum]){
			bulundu=1;
			break;
		}
	}
	if(bulundu){
		printf("bulundu\n");
	}
	else{
		printf("bulunamadi\n");
	}
}
