#include <stdio.h>
#include <stdlib.h>

int compfunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main (){
	int dizi[10]={9,8,5,6,1,37,8,4,61,3};
	
	int id;
    int num = sizeof(dizi) / sizeof(dizi[0]);
	
	qsort (dizi, num, sizeof (int), compfunc);

    printf("\n");

    for (id=0; id<num; id++) {
         printf("%d ", dizi[id]);
    }
	
	return 0;
	
}
