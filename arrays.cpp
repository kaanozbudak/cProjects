#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int a[5];
	int x,i;	
	for(i=0;i<5;i++)
	{	
	printf("Please enter x:\n");
	scanf("%d",&x);
	a[i]=x;	
	}	
	for(i=0;i<5;i++)
	{	
	printf("  %d   ",a[i]);
	}
	}
