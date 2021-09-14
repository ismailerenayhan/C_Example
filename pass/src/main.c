#include <stdio.h>
#include <time.h>

char aynimi(char *arg1,char *arg2,char s);

int main(int argc, char **argv) {
	clock_t starttim,endtim;
	starttim=clock();
	char password[9]={'E',65,66,65,33,33,33,33};
	sprintf(password,"AYLIN!!!");
	char deneme[9]={0,0,0,0,0,0,0,0};
	char a,b,c,d,e,f,g,h;
	char control=0;
	for (a = 33;  a< 127; a++) {
		for (b = 33; b < 127; b++) {
			for(c = 33; c < 127; c++) {
				for(d = 33; d < 127; d++) {
					for(e = 33; e < 127; e++) {
						for(f = 33; f < 127; f++) {
							for(g = 33; g < 127; g++) {
								for(h = 33; h < 127; h++) {
									deneme[0]=h;deneme[1]=g;deneme[2]=f;deneme[3]=e;deneme[4]=d;deneme[5]=c;deneme[6]=b;deneme[7]=a;
									//printf("%s\n",deneme);
									if (aynimi(password,deneme,9)==0) {
										printf("sifre kirildi ");
										control=1;
										break;
									}
									if(control==1)
										break;
								}
								if(control==1)
									break;
							}
							if(control==1)
								break;
						}
						if(control==1)
							break;
					}
					if(control==1)
						break;
				}
				if(control==1)
					break;
			}
			if(control==1)
				break;
		}
		if(control==1)
			break;
	}
	printf("%s",deneme);
	endtim=clock();
	double de=((double)(endtim-starttim)/CLOCKS_PER_SEC);
	printf("\n%.3f sure",de);
	getchar();
	return 0;
}

char aynimi(char *arg1,char *arg2,char s){
	for (s = 0; s < 9; s++)
		if(*(arg1+s)!=*(arg2+s))
			return 1;
	return 0;
}
