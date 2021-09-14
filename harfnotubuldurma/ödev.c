//girilen notun harf karþýlýðýný 35 kez bulan kod


#include<stdio.h>
void harfbul(int abc);
int main(){
	
	int id=1;
	int a =0;

	while (id<=3) {
	 scanf("%d", &a);
	 id++;
	 harfbul(a);
	}

return 0;
}
void harfbul(int abc){
	if(abc>=82&&abc<100){
	 	printf("notunuz >> AA  \n");
		printf("tamamlandi\n");
	 }
	 if(abc<=82&&abc>=74){
	 	printf("notunuz >> BA");
		printf("\n");
		printf("tamamlandi\n");
	 }
	 if(abc<=73&&abc>=65){
	 	printf("notunuz >> BB");
		printf("\n");
		printf("tamamlandi\n");
	 }
	 if(abc<=64&&abc>=58){
	 	printf("notunuz >> CB");
		printf("\n");
		printf("tamamlandi\n");
	 }
	 if(abc<=57&&abc>=50){
	 	printf("notunuz >> CC");
		printf("\n");
		printf("tamamlandi\n");
	 }
	 if(abc<=49&&abc>=40){
	 	printf("notunuz >> DC");
		printf("\n");
		printf("tamamlandi\n");
	 }
	 if(abc<=39&&abc>=35){
	 	printf("notunuz >> DD");
		printf("\n");
		printf("tamamlandi\n");
	 }
	 if(abc<=34&&abc>=25){
	 	printf("notunuz >> FD");
		printf("\n");
		printf("tamamlandi\n");
	 }
	 if(abc<=24&&abc>=0){
	 	printf("notunuz >> FF");
		printf("\n");
		printf("tamamlandi\n");
	 }
	 if(abc>100||abc<0){
	 	printf("hatalý giris");
		printf("\n");
	 }
}

