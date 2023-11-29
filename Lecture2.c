#include<stdio.h>
main(){
	
	int number1 = 10, number2 = 5, Addition ,Subtraction,Multiplication;
	float Division,Modulo;
	Addition  = number1 + number2;
	printf(" A = %d \n B = %d\n Addition = %d \n",number1, number2,Addition );
	
	printf("------------------ \n");
	
	Subtraction = number1 - number2;
	printf(" A = %d \n B = %d\n Subtraction = %d \n",number1, number2,Subtraction );
	
	printf("------------------ \n");
	Multiplication = number1 * number2;
	printf(" A = %d \n B = %d\n Multiplication = %d \n",number1, number2,Multiplication );
	
	printf("------------------ \n");
	Division = number1 / number2;
	printf(" A = %d \n B = %d\n Division = %f \n",number1, number2,Division );
	
	printf("------------------ \n");
	Modulo = number1 % number2;
	printf(" A = %d \n B = %d\n Modulo = %f \n",number1, number2,Modulo );
	
}
