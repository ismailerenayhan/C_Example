#include <stdio.h>

int main(){
    unsigned int deg=0xAB123478;
    
    unsigned char dizi[4];
    
    unsigned char *point;

    point = &deg;
    
    dizi[0]=*point;
    dizi[1]=*(point+1);
    dizi[2]=*(point+2);
    dizi[3]=*(point+3);
    printf("sayinin kendisi:%x\n",deg);
    printf("1.bayt:%x 2.bayt:%x 3.bayt:%x 4.bayt:%x",dizi[0],dizi[1],dizi[2],dizi[3]);
    return 0;
}

