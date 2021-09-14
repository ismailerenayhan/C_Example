#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(){
	
    int8_t vize;
    int8_t final;
    int8_t lazim;
    int8_t i;
    for(i=0;i<10;i++){
    	puts("vize notunuz");
	    scanf("%d",&vize);
	    final=(50-(vize*40/100))*100/60;
	    printf("%d",final);	
	}
    

	return 0;
}

// 60=(vize*40/100)+(final*60/100);
//final*60/100=60-(vize*40/100)
//final=(60-(vize*40/100))*100/60;
