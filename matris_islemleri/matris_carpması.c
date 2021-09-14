#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[2][2] = {1,3,1,2};
	int b[2][2] = {2,3,2,1};
	int c[2][2] = {};
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[j][k];
			}
			printf("%d ",c[i][j]);
		}
		printf("\n\n");
	}
	
}
