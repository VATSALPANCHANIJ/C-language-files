#include<stdio.h>
main(){
	int i ,j;
	int a[4][4];
	for(i=1; i<=4; i++){
			for(j=1; j<=4; j++){
				printf("enter value of a[%d][%d]:-",i,j);
				scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
//	for(i=1; i<=4; i++){
//		if(i%2==1){
//			for(j=1; j<=4; j++){
//				printf("%d",a[i][j]);
//			}
//		}else{
//			for(j=4; j<=1; j++){
//				printf("%d",a[i][j]);
//			}
//			
//		}
//		printf("\n");
//	}
}
