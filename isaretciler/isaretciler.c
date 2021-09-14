#include <stdio.h>

int main(){
	int veri=45;
	int *veri2;
	int veri3=5;
	//*veri=&veri2 ifadesi yanlışdır
	//veri=veri2 ifadesi yanlışdır
	veri2=&veri;
	printf("veri1 in adrresi=%p\n",veri2);
	printf("veri1 in adrresi=%p\n",&veri);
	
	printf("veri=%d\n",*veri2);
	*veri2=veri3;
	printf("veri=%d\n",*veri2);
	return 0;
}
