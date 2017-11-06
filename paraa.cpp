#include <stdio.h>

main ()
{
	int age,money;
	printf("This program calculates the pocked money of a child \n");
	printf("Please enter the age of a child\n");
	scanf("%d",&age);
	if(age<7) printf("No money\n");
	else if(age<=12) 
	{
		money= age*10;
		printf("Pocket money is %d \n",money);
	}
	else if (age<=18)
	{
		money=age*15;
		printf("Pocket money is %d",money);
}
	else printf("No money\n");
		{
	
		return 0;
	}
	
		
	
}
