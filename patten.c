#include<stdio.h>
main()
{	printf(" 1              2\n");		
	printf(" *         	* * * * * \n");
	printf(" * *		* * * *  \n");
	printf(" * * *     	* * *   \n");
	printf(" * * * *	* *	     \n");
	printf(" * * * * *	*        \n");
	int i,j,k;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n");
	printf("===========\n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=5; j>=i; j--){
		
			printf("%d",j);
		}
		
		printf("\n");
	}
	printf("\n");
	
	printf("===========\n\n");
	printf("        3   4\n\n");
	
	printf("        *   * * * * *\n");
	printf("      * *     * * * *\n");
	printf("    * * *       * * *\n");
	printf("  * * * *   	  * *\n");
	printf("* * * * *   	    *\n");
	
	for(i=1; i<=5; i++){
		
		for(j=i; j<5; j++){
		
			printf(" ");
		
		}for(k=1; k<=i; k++){
		
			printf("%d", k);
		
		}
		printf("\n");
	}
	
	printf("===========\n\n");
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<i; j++){
		
			printf(" ");
		
		}for(k=i; k<=5; k++){
		
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}
