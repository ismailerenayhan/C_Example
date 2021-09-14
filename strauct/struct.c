#include <conio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct struct1{
    char isim[15];
    char renk[15];
}deneme2;

int main(){
    struct struct1 deneme={.isim="Ali",.renk="mavi"};
    printf("denemenin ozellikleri isim:%s , renk:%s dir\n",deneme.isim,deneme.renk);
    struct struct1 deneme1={"Veli","Sari"};
    printf("deneme1in ozellikleri isim:%s , renk:%s dir\n",deneme1.isim,deneme1.renk);
    deneme2.renk[15]="Kirmizi";
    deneme2.isim[15]="Mehmet";
    printf("denemenin yeni ozellikleri isim:%s , renk:%s dir\n",deneme.isim,deneme.renk);
    getch();
}