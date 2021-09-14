#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void delay(uint64_t del);
int main(){
	while(1){
		int i,a;
		for(i=1;i<11;i++){
			for(a=0;a<i;a++){
				printf("%d",a);
				delay(200);
			}
			printf("\n");
		}	
	}
}
void delay(uint64_t del){
	uint64_t c;del=del*200000;
	for (c = 1; c <= del; c++){}
}
