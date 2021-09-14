#include <stdio.h>
void plus(unsigned char *bin){
	*bin=*bin | 0b00000001;
}
void minus(unsigned char *bin){
	*bin=*bin & 0b00000001;
}
int main(int argc, char **argv) {
	unsigned char num=0b01111000;
	printf("%d\n",num);
	plus(&num);
	printf("%d\n",num);
	minus(&num);
	printf("%d",num);
	return 0;
}



