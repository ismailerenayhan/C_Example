#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "GSM.h"

int main(void){
	
	char str[]="Hello World\n";
    char *abc;abc=&str[0];
    Gsm_Transmit(&str[0],12);
    ///////////////////////////////
    char buf[20];
    Gsm_Recive(buf);
    printf("%s",buf);
	
    return 0;
}
