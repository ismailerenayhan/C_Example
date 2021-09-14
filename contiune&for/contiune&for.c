#include <stdio.h>
#include <stdlib.h>
int i;
int main (){
	for(i=0;i<10;i++){
		if(i==4 || i==6){
			continue;
		}
		printf("%d",i);
	}
	return 0;
}
