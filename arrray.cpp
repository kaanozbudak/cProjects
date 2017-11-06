#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x[5]={15,17,8,49,34};
	int d,i,n=5;
	printf("Enter the searched value \n");
	scanf("%d",&d);
	
	for(i=0;i<n;i++)
	{
		if(x[i]==d)
		{
			printf("It has in the array\n");
			return 0;
		}
	}
	printf("It is not included in the array\n");
	
	
	
	
	
	
	
	
	return 0;
}
