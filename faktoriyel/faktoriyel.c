#include <stdio.h>
#include <stdlib.h>

int main()
{
	while(1){
		int a;
		int i;
		int sonuc=1;
		printf("sayi giriniz\n");
		scanf("%d", &a);
		for(i=1;i<=a;i++){
			sonuc=sonuc*i;
		}
		printf("%d\n",sonuc);
		
	}


}
