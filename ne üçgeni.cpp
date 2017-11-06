#include <stdio.h>
#include <stdlib.h>

main ()
{	int a,b,c;
    printf("Please enter the values of a tringle\n");
    scanf("%d %d %d,&a,&b,&c");
    
    if((a==b)&&(b==c))
    
    {
    		printf("This is a Equalateras triagle\n");
    		system("pause"); return 0;
    	
	}
	if((a!=b)&&(b!=c))  
	
			printf("This is a Scalene triangle \n");
			
	else printf("This is a Isoscelestriangle \n");		
	
	
	system("pause");
	return 0;

}
