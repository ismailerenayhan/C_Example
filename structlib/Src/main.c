#include <stdio.h>
#include "strctlib.h"

nesne_t yeni;

int main(int argc, char **argv) {
	yeni.boy=10;
	yeni.isim='i';
	strcyaz(yeni);
	strcdegistir(&yeni);
	strcyaz(yeni);
	return 0;
}

/* Struct larýn icerigini guncelleyen fonk.
 * Struct yazdiran fonk.
 */

