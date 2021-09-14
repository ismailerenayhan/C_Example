#include <conio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    static int i=0;
    for (i < 10; i++;)
    {
        printf("%d",i);
    }
    getch();
    return 0;
}