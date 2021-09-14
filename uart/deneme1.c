#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main()
{
       int sur = DETECT, grmode;
       float x,y,olcek;
       int   X,Y;

       initgraph(&sur, &grmode, "C:\\TC");

       setcolor(BLUE);          /* x-y coordinatları mavi */
       line(0,240,640,240);
       line(320,0,320,480);

       olcek = 15.0;            /* Ölçek değiştirilerek büyütme/küçültme yapılabilir. */

       setbkcolor(WHITE);       /* zemin rengi beyaz */
       setcolor(RED);           /* Fonksiyonun rengi kırmızı */
       
       x=-20.0;                 /* x değerleri [-20,20] aralığında */
       do
       {
           y  = 5*sin(x);       /* y=5*sin(x) fonksiyonu        */

           X  = 320 + x*olcek;  /* Lineer Dönüşüm denklemleri */
           Y  = 240 - y*olcek;

           line(X, Y, X, Y);    /* Fonksiyon çiziliyor...     */

           x += 0.01;

       }while( x<=20.0 );

       getchar();
       closegraph();

 return 0; 
}