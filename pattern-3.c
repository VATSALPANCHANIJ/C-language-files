#include<stdio.h>
main(){
	int i ,j;
	long a[100][100];
	for(i=1; i<=4; i++){
			for(j=1; j<=4; j++){
				printf("enter value of a[%d][%d]:-",i,j);
				scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=1; i<=4; i++){
			for(j=1; j<=4; j++){
				printf("%d ",a[i][j]);
			}
		printf("\n");
	}
	printf("diffrent");
	
	for(i=1; i<=4; i++){
		if(i%2==1){
			for(j=1; j<=4; j++){
				if(i==1||j==1||i==5||j==5){
					printf("%d ",a[i],[j])
				}
			}
		}else{
			if(i==1||j==1||i==5||j==5){
					printf("%d ",a[i],[j])
				}
		}
		printf("\n");
	}
}
