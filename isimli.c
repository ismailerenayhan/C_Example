#include <stdio.h>
#include <stdlib.h>

int main(){
	char sayi=0;
	int i;
	int j;
	for(i=0; i<=9; ++i){
		for(j=0; j<=i; j++){
			printf("%d",i);
		}
		printf("\n");
	}
	printf("\ntamamlandi . ok\n");

	return 0;

}
