#include<stdio.h>
main(){
	char grade;
	printf("enter your grade:");
	scanf("%c",&grade);
	switch(grade){
		case'a':
			printf("excllent work\n");
			break;
			
		case'b':
			printf("well done\n");
			break;
		case'c':
			printf("good job\n");
			break;
		case'd':
			printf("you passed but you could do better\n");
			break;
		case'e':
			printf("sorry,you failed\n");
			break;
		default:
			printf("invalid grade entered.\n");
			break;
	}
}
