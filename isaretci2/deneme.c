#include <stdio.h>
#include <stdlib.h>

int kareal(int *value);

int main(){
	int ab;
	printf("sayi giriniz\n");
	scanf("%d",&ab);
	ab=kareal(&ab);
	printf("karesi %d",ab);
	return 0;
}

int kareal(int *value){
	int kare=(*value)*(*value);
	return kare;
}

