 #include<stdio.h>
 main()
 {
   int year, amount;
   float rate, total;
   
	printf("Enter the Amount =");
	scanf("%d",&amount);

	printf("Enter the Rate =");
	scanf("%f",&rate);

	printf("How many year put your amount =");
	scanf("%d",&year);
	
    total = amount*rate*year/100;

    printf("simple intrust is %f", total);

 }
