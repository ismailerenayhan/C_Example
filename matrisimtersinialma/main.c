#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
uint8_t i,j;
int main(int argc, char *argv[]) {
	FILE *dosya;
	dosya=fopen("wr.txt","w");
	char a[3][3];
	char ar[3][3];
	///////////////////////////////
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=getche();
			printf("\n");
		}
	}
	///////////////////////////////
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			fputc(a[i][j],dosya);
		}
		fputc('\n',dosya);
	}
	///////////////////////////////
	fclose(dosya);
	char matris[3][3];
	fopen("wr.txt","r");
	/*for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matris[i][j]=fgetc(dosya);
		}
	}
	///////////////////////////////
	*/
	char buffer[3];
	fgets(buffer,5,dosya);
	for(i=0;i<3;i++){
		matris[0][i]=buffer[i];
	}
	fgets(buffer,5,dosya);
	for(i=0;i<3;i++){
		matris[1][i]=buffer[i];
	}
	fgets(buffer,5,dosya);
	for(i=0;i<3;i++){
		matris[2][i]=buffer[i];
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%c",matris[i][j]);
		}
	}
	///////////////////////////////
	FILE *dos;
	dos=fopen("new.txt","w");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			fputc(matris[j][i],dos);
		}
		fputc('\n',dos);
	}
	///////////////////////////////
	fclose(dos);
	fclose(dosya);
	return 0;
}
