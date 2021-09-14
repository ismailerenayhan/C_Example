#include<stdio.h>

int main(){
	
	int dizi[10]={1,2,3,4,5,6,7,8,9,10};
	int *diziptr;
	diziptr=&dizi[0];
	int i;
	for(i=0;i<10;i++){
		printf("dizi[%d] adress = %p deger = %d\n",i,&dizi[i],dizi[i]);
	}
	printf("\n-----------------------------\n\n");
	
	for(i=0;i<10;i++){
		printf("dizi[%d] adress = %p deger = %d\n",i,diziptr+i,*(diziptr+i));
	}
	
	return 0;
}
