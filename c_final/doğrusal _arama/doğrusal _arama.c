#include <stdio.h>

int main(){
	int i,bulundu;
	bulundu=0;
	char aranan;
	char dizi[25]="ismail eren AYHAN";
	
	printf("aranan harfi yaziniz\n");
	scanf("%c",&aranan);
	for(i=0;i<26;i++){
		if(dizi[i]==aranan){
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
