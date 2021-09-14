#include <stdio.h>
#include "Dos.h"


int main(int argc, char **argv) {
	dosyayaz("Hello World\ndeneme\nMerhaba Dunya");
	dosyaoku();
	dosyayaz("Hello World\ndeneme\nMerhaba Dunya");
	dosyaoku();
	getchar();
	return 0;
}



