#include <conio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//malloc calloc free realloc

int main (){
    int *p;
    p=(int*)malloc(100*sizeof(int));
    p[30]=60;
    printf("%d",p[30]);
    getch();
    free(p);
    return 0;
}



