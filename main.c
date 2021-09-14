#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main()
{
       int sur = DETECT, grmode;
       float x,y,olcek;
       int   X,Y;

       initgraph(&sur, &grmode, "C:\\TC");

       setcolor(BLUE);          /* x-y coordinatlar� mavi */
       line(0,240,640,240);
       line(320,0,320,480);

       olcek = 15.0;            /* �l�ek de�i�tirilerek b�y�tme/k���ltme yap�labilir. */

       setbkcolor(WHITE);       /* zemin rengi beyaz */
       setcolor(RED);           /* Fonksiyonun rengi k�rm�z� */
       
       x=-20.0;                 /* x de�erleri [-20,20] aral���nda */
       do
       {
           y  = 5*sin(x);       /* y=5*sin(x) fonksiyonu        */

           X  = 320 + x*olcek;  /* Lineer D�n���m denklemleri */
           Y  = 240 - y*olcek;

           line(X, Y, X, Y);    /* Fonksiyon �iziliyor...     */

           x += 0.01;

       }while( x<=20.0 );

       getchar();
       closegraph();

 return 0; 
}
