#include <stdio.h>
#include <stdlib.h>

char buf[15];
char buf2[15];
int sayi=25;
int main(){
	
	sprintf(buf,"hello%s"," world");
	printf("%s",buf);
	delay(1000);
	printf("\n");
	sprintf(buf2," %d",sayi);
	sprintf(buf,"hello %s",buf2);
	buf[9]=65;
	buf[10]=66;
	buf[11]='C';
	printf("%s",buf);
	
}

void delay(unsigned long del){
	del=del*32.767;
	unsigned long c, d;
	for (c = 1; c <= del; c++)
       for (d = 1; d <= del; d++)
       {}
}



