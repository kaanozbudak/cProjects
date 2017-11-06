#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n;
	int top=0;
	printf("Please enter how many times and which value ?");
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		top+=m;
	}
	printf("result: %d",top);
}
