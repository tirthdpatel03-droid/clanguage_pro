#include<stdio.h>
main(){
	int hight=5,width=5,i,j;
	for(i=1;i<=hight;i++){
		for(j=1;j<=width;j++){
			if(i==1|| i==3 || j==1|| (i==2 && j==width)){
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
