#include<stdio.h>

int main(){
	int a[2][2]={1,2,3,4};
	int *point;
	point=a;
	printf("deger %p\n",point);
	point=&a[0][0];
	printf("deger %p",point);
	return 0;
}
