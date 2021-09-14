#include <stdio.h>
#include <stdlib.h>

int main(){
	int dizi[3][3]={1,2,3,
					4,5,6,
					7,8,9};
	int i,a;
	for(i=0;i<3;i++){
		for(a=0;a<3;a++){
			printf("%d",dizi[i][a]);
		}
		
		printf("\n");	
	}
	
}
