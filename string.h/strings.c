#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20]="Hello World";
}

/*
char *strcpy (char *s1,const char *s2)
// s2 stringini s1 dizisi içine kopyalar, s1‘in değeri döndürülür.
char *strncpy (char *s1,const char *s2,size_t n)
//s2 stringinin en fazla n karakterini s1 dizisi içine kopyalar. s1’in değeri döndürülür.
char *strcat (char *s1,const char *s2)
//s2 stringini s1 dizisine ekler. s2’nin ilk karakteri s1 dizisinin null karakteri üzerine yazılır. s1’in değeri döndürülür.
char *strncat(char *s1,const char *s2,size_t n)
//s2 stringinin en fazla n karakterini s1 dizisine keler. s2’nin ilk karakteri s1 dizisinin null karakteri üzerine yazılır. s1’in değeri döndürülür.



int strcmp (const char*s1,const char *s2);
// s1 stringiyle s2 stringini karşılaştırır. Fonksiyon, s1 s2’ye eşitse 0 , s1 s2’den küçükse 0’dan küçük, s1 s2’den büyükse 0’dan büyük bir değer döndürür.
 
int strcmp (const char*s1, const char *s2, size_t n);
// s1 stringinin n karakterine s2 stringiyle karşılaştırır. Fonksiyon, s1 s2’ye eşitse 0 , s1 s2’den küçükse 0’dan küçük,s1 s2’den büyükse 0’dan büyük bir değer döndürür.



size_t strlen (const char *s);
// s stringinin uzunluğunu bulur. null karakterden önceki karakterlerin sayısı döndürülü



void * memcpy (void *s1,const void *s2,size_t n);
// s2 ile gösterilen nesneden n karakteri s1 ile gösterilen nesneye kopyalar. Oluşan nesneyi gösteren bir gösterici döndürülür.
 
void *memmove (void *s1,const void *s2,size_t n);
// s2 ile gösterilen nesneden n karakteri s1 ile gösterilen nesneye kopyalar. Kopyalama işlemi, s2 ile gösterilen nesnedeki karakterler önce geçici bir diziye kopyalanıp daha sonra da bu geçici diziden s1 ile gösterilen nesneye kopyalanıyormuş gibi yapılır. Sonuçta, oluşan nesneyi gösteren bir gösterici döndürülür.
 
int memcmp(const void *s1,const void *s2,size_t n);
// s1 ve s2 ile gösterilen nesnelerin ilk n karakterlerini karşılaştırır. Fonksiyon, s1 s2’ye eşitse 0, s1 s2’den küçükse 0’dan küçük, s1 s2’den büyükse 0’dan büyük bir değer döndürür.
 
void *memchr(void *s,int c,size_t n);
// s ile gösterilen nesne içinde c ’in unsigned char’a dönüştürülür ilk bulunduğu konumu belirler. Eğer c bulunursa, nesne içindeki c ’in konumunu gösteren bir gösterici döndürülür. Aksi takdirde, NULL döndürülür.
 
void *memset(void *s,int c,size_t n);
// s ile gösterilen nesnenin ilk n karakterine, c  unsigned int’e dönüştürülür kopyalar. Sonucu gösteren bir gösterici döndürülür.
*/