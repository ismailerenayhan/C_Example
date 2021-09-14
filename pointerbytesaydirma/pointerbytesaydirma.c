#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){
    uint32_t sayi=0xAB5678CF;
    uint8_t *point;
    uint8_t array[4];
    point=&sayi;
    array[0]=*point;
    array[1]=*(point+1);
    array[2]=*(point+2);
    array[3]=*(point+3);
    printf("byte %x byte %x byte %x byte %x",array[0],array[1],array[2],array[3]);
    while (1)
    {
        /* code */
    }
    return 0;
}