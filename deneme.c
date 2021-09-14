
#include<stdio.h>

#include<stdlib.h>

int main(){
	
	int vize[10],final[10],id;
	
	float total;
	
	for(id=0; id<10; id++){
		
		printf("vize notunu giriniz\n");
		
		scanf("%d", &vize[id]);
		
		printf("final notunu giriniz\n");
		
		scanf("%d", &final[id]);
		
		total=((vize[id]*40)+(final[id]*60))/100;
		
		if(total>=82){
	 	printf("notunuz >> AA  >>,%f",total);
	 	printf("\n");
		printf("not, %d,",id+1);
		printf("tamamlandi\n");
		 }
		 else if(total<=82&&total>=74){
		 	printf("notunuz >> BA >>,%f",total);
			printf("\n");
			printf("not, %d,",id+1);
			printf("tamamlandi\n");
		 }
		 else if(total<=73&&total>=65){
		 	printf("notunuz >> BB >>,%f",total);
			printf("\n");
			printf("not, %d,",id+1);
			printf("tamamlandi\n");
		 }
		 else if(total<=64&&total>=58){
		 	printf("notunuz >> CB >>,%f",total);
			printf("\n");
			printf("not, %d,",id+1);
			printf("tamamlandi\n");
		 }
		 else if(total<=57&&total>=50){
		 	printf("notunuz >> CC >>,%f",total);
			printf("\n");
			printf("not, %d,",id+1);
			printf("tamamlandi\n");
		 }
		 else if(total<=49&&total>=40){
		 	printf("notunuz >> DC >>,%f",total);
			printf("\n");
			printf("not, %d,",id+1);
			printf("tamamlandi\n");
		 }
		 else if(total<=39&&total>=35){
		 	printf("notunuz >> DD >>,%f",total);
			printf("\n");
			printf("not, %d,",id+1);
			printf("tamamlandi\n");
		 }
		 else if(total<=34&&total>=25){
		 	printf("notunuz >> FD >>,%f",total);
			printf("\n");
			printf("not, %d,",id+1);
			printf("tamamlandi\n");
		 }
		 else if(total<=24&&total>=0){
		 	printf("notunuz >> FF >>,%f",total);
			printf("\n");
			printf("not, %d,",id+1);
			printf("tamamlandi\n");
		 }
		
	}	
	
	return 0;
	
}


