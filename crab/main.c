#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>

char s1,s2,zar,zar2;
char cntrl='a';

char zarat(void){
	srand(time(0));
	s1=rand() %6 + 1;
	s2=rand() %6 + 1;
	return s1+s2;
}

void delay(int number_of_seconds){
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

int main(void){
	while(cntrl=='a'){
		zar=zarat();
		printf("%d\n",zar);
		if(zar==7||zar==11){
			printf("Oyuncu kazandi\n");
		}
		else if(zar==2||zar==3||zar==12){
			printf("Crab Kasa kazandi\n");
		}
		else{
			while(1){
				delay(1);
				printf("Berabere \n");
				zar2=zarat();
				printf("%d\n",zar2);
				if(zar2==zar){
					printf("Oyuncu kazandi\n");
					break;
				}
				else if(zar2==7){
					printf("Crab Kasa kazandi\n");
					break;
				}
				zar = zar2;
			}
		}
		printf("Devam etmek icin 'a' ya cikmak icin herhangibir tusa basiniz\n");
		cntrl=getch();
	}
    return 0;
}
