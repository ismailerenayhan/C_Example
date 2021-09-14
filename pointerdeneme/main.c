#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t deg=0xAB123478;

    uint8_t dizi[4];

    uint8_t *point;

    point = &deg;

    dizi[0]=*point;
    dizi[1]=*(point+1);
    dizi[2]=*(point+2);
    dizi[3]=*(point+3);
    printf("sayinin kendisi:%x\n",deg);
    printf("1.bayt:%x 2.bayt:%x 3.bayt:%x 4.bayt:%x",dizi[0],dizi[1],dizi[2],dizi[3]);
    return 0;
}
