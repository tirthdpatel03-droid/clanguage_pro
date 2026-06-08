#include<stdio.h>
main(){
	int rows=5,i,j;
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows-i;j++){
			printf(" ");
		}
		for(j=rows-i+1;j<=rows;j++){
			printf("%d",j);
		}
		for(j=rows-1;j>=rows-i+1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
