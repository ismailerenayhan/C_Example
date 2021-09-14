#include <stdio.h>
#include <stdint.h>
#include "lib.h"
uint8_t i;
int main(int argc, char **argv) {
	struct kitap kit1={.isim="Ali",.sayfasayisi=300,.puan=9};
	struct kitap kit2={.isim="Veli",.sayfasayisi=100,.puan=8};
	struct kitap kit3;
	struct kitap kitaplik[3];
	chrprint(kit1.isim);
	strprint(kit2);
	struct kitap *ptrkit;
	ptrkit=&kit3;
	strdoldur(ptrkit);
	strprint(*ptrkit);
	strdoldur(ptrkit);
	strprint(*ptrkit);
	for(i=0;i<3;i++){
		strdoldur(&(kitaplik[i]));
	}
	for(i=0;i<3;i++){
		strprint(kitaplik[i]);
	}
	return 0;
}
