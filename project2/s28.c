#include<stdio.h>
main(){
	char grade;
	printf("enter your grade:");
	scanf("%c",&grade);
	if(grade>='a' && grade<='d'){
	    printf("congratulations! you are eligible for the next level\n"); 
}
	else if (grade=='f'){
		printf("please try again next time\n");
	}
	else{
		printf("invalide grade entered");
	}
}
