#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define SIZE 10

int sayilar[11],teks[11],cifts[11],i;

void selection(int array[],int size);
void tekleriyaz(void);
void ciftleriyaz(void);
void sayilarial(void);


int main(int argc, char **argv) {
	sayilarial();
	selection(sayilar, 11);
	tekleriyaz();
	ciftleriyaz();
	return 0;
}

void selection(int array[],int size){
    int i,j,temp,min;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(array[j]<array[min])
                min=j;
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    for(i=0;i<size;i++)
        printf("%d ",array[i]);
}

void tekleriyaz(void){
	printf("\n------Tek Sayilar------\n");
	for(i=1;i<=SIZE;i++){
		if(sayilar[i]%2==1){
			teks[i]=sayilar[i];
			printf("%d,",teks[i]);
		}
	}
}

void ciftleriyaz(void){
	printf("\n------Cift Sayilar------\n");
	for(i=1;i<=SIZE;i++){
		if(sayilar[i]%2==0){
			cifts[i]=sayilar[i];
			printf("%d,",cifts[i]);
		}
	}
}

void sayilarial(void){
	printf("Sayilari giriniz\n");
	for(i=1;i<=SIZE;i++){
		printf("%d. sayiyi giriniz : ",i);
		scanf("%d",&sayilar[i-1]);
	}
}
