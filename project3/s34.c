#include<stdio.h>
main(){
	int row=5,i,j;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		for(j=1;j<=2*(row-i);j++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
