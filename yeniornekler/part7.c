#include <conio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int j;
    int matris[2][2];
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d",matris[i][j]);
        }
    }
    getch();
    return 0;
}