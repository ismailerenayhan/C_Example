#include <stdio.h>
#include "deneme.h"

char dizi[]="Hello,World,Merhaba,Dunya";

int main(int argc, char **argv) {
	yaz(&dizi[0], ',');
	return 0;
}
