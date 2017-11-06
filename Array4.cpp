#include <stdio.h>
#include <stdlib.h>

int main()
{

int i,j,n,m,a,b;
int array[3][3];
printf("Please enter your array:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&array[i][j]);
	}	
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf(" %d",array[i][j]);
	}
	printf("\n");	
}
printf("Please enter a and b but b>a\n");
scanf("%d %d",&a,&b);
printf("Conditional is true numbers(Other numbers are show 0):\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{	
		if(a<array[i][j] & array[i][j]<b)
		{
		printf(" %d",array[i][j]);
		}
		else
		{
		printf(" 0");	
		}
	}
	printf("\n");	
}
return 0;
}
