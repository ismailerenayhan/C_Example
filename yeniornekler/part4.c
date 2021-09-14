#include <conio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[]="Hello World";
    char *p;
    p=&str[0];
    uint8_t i;
    for(i=0;i<sizeof(str);i++){
        printf("%c",*(p+i));
    }
    getch();
    return 0;
}