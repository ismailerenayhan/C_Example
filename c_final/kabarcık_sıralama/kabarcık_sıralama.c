#include <stdio.h>
#include <stdlib.h>
int g;
int main(){
	int dizi[4]={9,8,5,6,1,37,8,4,61,3};
	for(g=0;g<4;g++){
		scanf("%d",&dizi[g]);
	}
	int i,j,gecici;
	for(i=0;i<4;i++){
		for(j=0;j<3-i;j++){
			if(dizi[j]>dizi[j+1]){
				gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
			}			
		}
	}
	for(i=0;i<10;i++){
		printf("%d\n",dizi[i]);
	}
	printf("en buyuk sayi %d girilen %d . sayidir",dizi[4]);
	return 0;
}
