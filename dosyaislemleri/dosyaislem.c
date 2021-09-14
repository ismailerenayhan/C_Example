#include <conio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *dosya;
    dosya=fopen("C:\\Users\\ismai\\desktop\\deneme.c","w");
    putc('A',dosya);
    fprintf(dosya,"%s","\nHello World");
    fclose(dosya);
    getch();
    return 0;
}
