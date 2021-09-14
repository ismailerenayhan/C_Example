#include <stdio.h>
typedef struct kitaplar {
	char isim[30];
	int sayfa;
}kit_t;

void strcprnt(kit_t arg);

void strcgets(kit_t *ptr);

FILE *dosya;

void fileprint(kit_t arg);

void fileread(void);

char i,s;

char dizi[100];

int main(int argc, char **argv) {
	dosya=fopen("kayit.txt","w");
	kit_t kitler[3];
	printf("kitap kaydetmek icin 1 e kayitli kitaplari goruntulemek için 2 ye basiniz\n");
	scanf("%d",&s);
	if(s){
		for(i=0;i<3;i++){
			strcgets(&(kitler[i]));
		}
		for(i=0;i<3;i++){
			strcprnt(kitler[i]);
		}
		fclose(dosya);
	}
	else if(s==0){
		fileread();
	}

	/*prnt("Hello World\n");
	printf("Hello World");*/

	return 0;
}


void strcprnt(kit_t arg){
	printf("kitap ismi : %s sayfa sayisi %d\n",arg.isim,arg.sayfa);
}

void strcgets(kit_t *ptr){
	printf("lutfen isim giriniz\n");
	scanf("%s",ptr->isim);;
	printf("lutfen sayfa sayisini giriniz\n");
	scanf("%d",&(ptr->sayfa));
}
void fileprint(kit_t arg){
	for(i=0;i<3;i++){
		fprintf(dosya,"%s %d\n",arg.isim,arg.sayfa);
	}
}

void fileread(void){
	dosya=fopen("kayit.txt","r");
	fscanf(dosya,"%s",&dizi);
	printf("%s",dizi);
	fclose(dosya);
}



