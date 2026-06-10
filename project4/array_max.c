<<<<<<< HEAD
#include<stdio.h>
main(){
	int a[3][3]={{2,7,2},
	             {3,5,4},
				 {8,9,6}};
	int i,j,max;
	max=a[0][0];			
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",a[i][j]);
		
			if(a[i][j]>max){
				max=a[i][j];
			}
    }
	}
	printf("%d",max);
}
=======
#include<stdio.h>
main(){
	int a[3][3]={{2,7,2},
	             {3,5,4},
				 {8,9,6}};
	int i,j,max;
	max=a[0][0];			
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",a[i][j]);
		
			if(a[i][j]>max){
				max=a[i][j];
			}
    }
	}
	printf("%d",max);
}
>>>>>>> de38238bbc81de3f9d852199f05553b230a8af7f
