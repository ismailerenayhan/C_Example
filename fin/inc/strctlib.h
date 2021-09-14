#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

typedef struct nesne{
	char isim[30];
	int boy;
}nesne_t;

void strcyaz (nesne_t n);

void strcdegistir (nesne_t *n);
