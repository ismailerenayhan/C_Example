#ifndef LIB_H_
#define LIB_H_
#endif
#include <stdio.h>
struct kitap {
	char isim[50];
	int sayfasayisi;
	int puan;
};
void strprint(struct kitap kit);
void chrprint(char *chr);
void strdoldur(struct kitap *ptr);
