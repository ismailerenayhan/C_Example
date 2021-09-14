//fonksiyonlar
#include <conio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void in(void);
void bastir(char str[50]);
uint8_t random(void);
uint16_t topla(uint8_t sayi1,uint8_t sayi2);

int main(){
    while (1)
    {
        printf("Hello World");
        in();
        int a=topla(random(),random());
        char str1[10];
        sprintf(str1,"%d",a);
        bastir(str1);
        getch();
    }
    return 0;
}
/*
function types
void void
void value
value void
value value
////
altsatiragec
ekrana bastir
random sayigetir
gonderilen sayilari topla
*/
void in(void){
    printf("\n");
}
void bastir(char str[10]){
    printf("%s",str);
}
uint8_t a[10]={4,5,58,76,84,2,1,7};
uint8_t random(void){
    uint8_t i;
    i=a[3];
    a[3]=a[5];
    a[5]=a[8];
    a[8]=i;
    return a[5];
}
uint16_t topla(uint8_t sayi1,uint8_t sayi2){
        return sayi1+sayi2;
}
