#include <stdio.h>
#include <stdint.h>
#include <conio.h>

void yazdir(char str[]);
int topla(int *number1, int *number2);
void carp(int *number1,int *number2,int *result);

int main() {
    int num1,num2,res;
    num1=25;
    num2=35;
    yazdir("Hello world\n");
    printf("%d\n", topla(&num1,&num2));
    carp(&num2,&num1,&res);
    printf("new result = %d",res);
    getch();
    return 0;
}


void yazdir(char str[]){

    printf("%s",str);

}
int topla(int *number1, int *number2){
    int result=(*number1)+(*number2);
    *number2=9;
    *number1=9;
    return result;

}

void carp(int *number1,int *number2,int *result){
    *result=(*number1)*(*number2);

}
