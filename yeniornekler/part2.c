#include <conio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int a(void);

int main(){
    a();
}

int a(void){
    printf("hello world");
    return a();
}