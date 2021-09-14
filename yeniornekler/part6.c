#include <conio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
uint8_t i;
uint8_t a;
uint8_t b;
 int main(){
    int matris[5][5];
    char text[100];
    int dizi[30];
    printf("5x5 matris giriniz\n");
    FILE *dosya=fopen("matris1.txt","w");
    for (a = 0; a < 5; a++)
    {
        for (b = 0; b < 5 ; b++)
        {
            scanf("%d",&matris[a][b]);
        }
    }
    for (a = 0; a < 5; a++)
    {
        for (b = 0; b < 5; b++)
        {
            fprintf(dosya,"%d",matris[a][b]);
        }
        fprintf(dosya,"%s","\n");
    }
    fclose(dosya);
    FILE *dosyaok=fopen("matris1.txt","r");
    FILE *dosya2=fopen("matris2.txt","w");
    i=0;
    while (fscanf(dosyaok,"%d",&dizi[i])!=EOF)
    {
        printf("%d",dizi[i]);
        i++;
    }
    printf("\n\n");
    int transpoz[5][5];
    for ( i = 0; i < 5; i++)
    {
        for (b = 0; b < 5; b++)
        {
            transpoz[b][i]=matris[i][b];
        }
    }
    for (a = 0; a < 5; a++)
    {
        for ( b = 0; b < 5; b++)
        {
            fprintf(dosya2,"%d",transpoz[a][b]);
        }
        fprintf(dosya2,"\n");
    }
    
    fclose(dosya2);
    getch();
    return 0;
 }


 
