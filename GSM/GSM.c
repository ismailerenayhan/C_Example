#include "GSM.h"
int i;
void Gsm_Transmit(char * str,int datasize){
	
	char data[30];
	for(i=0;i<datasize;i++){
		data[i]=*(str+i);
	}
	printf("%s",data);
}
void Gsm_Recive(char buffer[]){
	char dizi[20];
	scanf("%s",&dizi);
	for(i=0;i<=sizeof(buffer);i++){
		buffer[i]=dizi[i];
	}
}
