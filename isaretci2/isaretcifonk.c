#include <stdio.h>
#include <stdlib.h>

int kareal(void);

int main(){
	int a;
	printf("sayi giriniz\n");
	scanf("%d",a);
	a=kareal();
	printf("\nkaresi%d",a);
	return 0;
}

int kareal(void){
	return 5;
}



