#include <stdio.h>
#include <stdlib.h>

main ()
{	int a,b,c;
    printf("Please enter the values of a triangle\n");
    scanf("%d %d %d,&a,&b,&c);
    
    if((a==b)&&(b==c))
    
    {
    		printf("This is a Equalateras triangle\n");
    		system("pause"); return 0;
    	
	}
	if((a!=b)&&(b!=c))  
	
			printf("This is a Scalene triangle \n");
			
			else printf("This is a Isosceles triangle \n");		
	
	
	system("pause");
	return 0;

}
