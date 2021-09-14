#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	//FILE *fp;
	//int a=5;
	int *ptr;

	struct mystr{
		int *yas;
	}news;
	news.yas=malloc(sizeof(int));
	*news.yas=54;
	printf("yas %d\n",*news.yas);
	///////////////////////////////
	ptr=malloc(sizeof(int));
	*ptr=999;
	printf("%d\n",*ptr);
	free(ptr);
	printf("%d\n",*ptr);
	//////////////////////////////
	ptr=calloc(5,sizeof(int));
	printf("%d\n",*ptr);
	free(ptr);
	printf("%d\n",*ptr);
	//////////////////////////////
	ptr=realloc(ptr,sizeof(int));
	*ptr=99;
	printf("%d\n",*ptr);
	free(ptr);
	printf("%d\n",*ptr);
	//////////////////////////////
	/*fp=fopen("deneme.txt","w");
	printf("%p\n",fp);
	printf("%p",&a);*/
	return 0;
}



