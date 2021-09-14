#include <stdio.h>
#include <stdlib.h>

void kareal(int *value);

int main(){
	int ab;
	printf("sayi giriniz\n");
	scanf("%d",&ab);
	kareal(&ab);
	printf("karesi %d",ab);
	return 0;
}

void kareal(int *value){
	int kare=(*value)*(*value);
	*value=kare;
}

