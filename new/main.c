#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main() {
    uint8_t a=5;
    uint8_t b=6;
    uint8_t c=a+b;
    uint8_t *point=NULL;
    point=&c;
    printf("Value:%d\n",*point);
    printf("Hexadecimal Adress:%p\n",point);
    printf("Decimal Adress:%d\n",point);
    point++;
    printf("New Decimal Adress:%d\n",point);
    printf("Int vareible size of :%d\n",sizeof(int) );
    printf("%x",0xC4A4);
    while (1)
    {
        /* code */
    }
    
    return 0;
}

