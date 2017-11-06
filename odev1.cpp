#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a[100];
	int x,i;
	
	printf("your array number:\n");
	scanf("%d",&x);
	for (i=1;i<=x;i++)
	{
		printf("Please enter values:\n");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=x;i++)
	{
		printf("--%d--	",a[i]);
	}
}
