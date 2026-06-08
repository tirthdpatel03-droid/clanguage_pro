#include<stdio.h>
main(){
	int marks;
	printf("enter marks:");
	scanf("%d",&marks);
	if(marks>90){
		printf("student grade is A");}
		else if(marks>80){
			printf("student grade is B");
		}
		else if(marks>70){
			printf("student grade is C");
		}
		else if(marks>60){
			printf("student grade is D");
		}
		else if(marks>50){
			printf("student grade is E");
		}
		else if(marks>40){
			printf("student grade is F");
		}
		else{
			printf("fail");
		}
	
	
}
