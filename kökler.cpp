#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
main ()
{
	float a,b,c,d,x1,x2;
	printf("This program calculates the roots of a second\n");
	printf("Please enter the values of a, b and c\n");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0) printf("No real roots\n");
	else if(d==0)
	{
		printf("Equal two roots\n");
		x1=(-b)/(2*a); x2=x1;
		printf("Roots are %f %f %f",&a,&b,&c);
}
		else
		
	 {
		printf("Two different roots\n");
		x1=((-b-sqrt(d)))/(2*a);
		x2=((-b+sqrt(d)))/(2*a);
		printf("Roots are %f %f\n",x1,x2);
	return 0;	}
	}
	
	
	
	
	
	
	

