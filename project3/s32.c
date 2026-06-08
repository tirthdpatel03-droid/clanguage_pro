#include<stdio.h>
main(){
	int rows=5,i,j,k;
	for(i=rows;i>=1;i--){
		for(j=0;j<rows-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			if(k%2!=0){
				printf("1");
			}else{
				printf("0");
			}
		}
		printf("\n");
	}
}
