#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    
    
    
    
    
    

    return 0;
}
























/*
scanf() için
%c  tek bir karakter    char
%d  veya  %i iþaretli ondalýk tamsayý    int, short
%ld     uzun iþaretli ondalýk tamsayý   long
%u  iþaretsiz ondalýk tamsayý   unsigned int, unsigned short
%f  Gerçel sayý float, double
%s  karakter dizisi (string)    char
%lu iþaretsiz uzun tamsayý  unsigned long
%x	Hexa decimal sayýlar
%o	Octal sayýlar
////////////////////////////////////////////////////////////////////////////////////////////
+=	Ýki sayýyý toplayýp deðeri soldakine atar.	a +=b /a=(a+b)
-=	Soldaki sayýdan saðdakini çýkarýr ve sonucu soldakine atar.	a-=b;/a=a-b
&=	Ýki sayýyý mantýksal çarpma iþlemine tabi tutup sonucu soldakine atar.	a &=b/a=(a&b)
^=	Ýki sayýya exor iþlemini uygulayýp sonucu soldakine atar	a ^=b, a= a^b ;
|=	Ýki sayýya mantýksal toplama yapýp sonucu soldakine atar.	a|=b,a=a|b;
/=	Soldaki sayýyý saðdakine bölerek sonucu soldakine atar	a/=b; a=a/b,
<<=	Soldaki sayýyý saðdaki sayý miktarý kadar kaydýrýp tekrar soldakine eþitler	a= a<<b;
>>=	Soldaki sayýyý saðdakinin deðeri kadar sola kaydýrýp soldakine eþitler	a>>=b/ a=a>>b;
%=	Soldaki sayýyý saðdakine bölerek kalaný soldakine atar	a%=b a=a%B
*=	Ýki sayýyý çarpýp deðeri soldakine atar	a*=b; a=a*b;

/////////////////////////////////////////////////////////////////////////////////
float sayi1;
    float sayi2;
    char islem;
    float sonuc;

    while(1){
        printf("lutfen 1.sayiyi giriniz\n");
        scanf("%f",&sayi1);
        printf("lutfen 2.sayiyi giriniz\n");
        scanf("%f",&sayi2);
        printf("islem seçiniz \n+\n-\n*\n/\n");
        scanf("%s",&islem);

        if(islem == '+'){
            sonuc=sayi1+sayi2;
            printf("sonuc %f\n",sonuc);
        }
        else if(islem=='-'){
            sonuc=sayi1-sayi2;
            printf("sonuc %f\n",sonuc);
        }
        else if(islem=='*' ||islem=='x'){
            sonuc=sayi1*sayi2;
            printf("sonuc %f\n",sonuc);
        }
        else if(islem='/'){
            sonuc=sayi1/sayi2;
            printf("sonuc %f\n",sonuc);
        }
    }
/////////////////////////////////////////////////////////////////////////////////////////

for(a=0;a<10;a++){
		printf("%d \n",a);
	}
/////////////////////////////////////////////////////////////////
 while (id<=10) {
     printf("%d ", id);
     id++; // Döngü kontrol deðiþkeni deðer artýrma
  }
////////////////////////////////////////////////////////////
  do {
     printf("%d ", id++); 
  } while (id<=10);

	*/
