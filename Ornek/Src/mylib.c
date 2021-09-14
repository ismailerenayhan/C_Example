#include "mylib.h"

void helloworld(void){
	printf("Hello World\n");
}

void delay(int number_of_seconds){
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

void bubble(int array[],int size){
    int i,j,temp;
    for(i=1;i<size;i++){
        for(j=0;j<size-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
        printf("%d ",array[i]);
}


//---- SELECTION SORT ALGORITMASI ----//
void selection(int array[],int size){
    int i,j,temp,min;

    for(i=0;i<size-1;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(array[j]<array[min])
                min=j;
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    for(i=0;i<size;i++)
        printf("%d ",array[i]);
}

//---- INSERTION SORT ALGORITMASI ----//
void insertion(int array[],int size){
    int i,j,temp;

    for(i=0;i<size;i++){
        for(j=0;j<i+1;j++){
            if(array[j]>array[i]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    for(i=0;i<size;i++)
        printf("%d ",array[i]);
}

int ikicarp(int a){
	return (a<<1);
}

int ikibol(int a){
	return (a>>1);
}

uint8_t tumler8(uint8_t number){
	uint8_t buf = 0;
	buf = number ^ 1023;
	return buf;
}

uint16_t tumler16(uint16_t number){
	uint16_t buf = 0;
	buf = number ^ 65535;
	return buf;
}

uint32_t tumler32(uint32_t number){
	uint32_t buf = 0;
	buf = number ^ 4294967295;
	return buf;
}

uint64_t tumler64(uint64_t number){
	uint64_t buf = 0;
	buf = number ^ (0xFFFFFFFFFFFFFFFF);
	return buf;
}
