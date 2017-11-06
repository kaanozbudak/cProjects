#include <stdio.h>
#include <stdlib.h>

int main ()
{	
	int i,n,q[100],b;
	printf("How many numbers:\n");
	scanf("%d",&n);
	printf("Your numbers:\n");
	for (i=1;i<=n;i++)
	{
	scanf("%d",&q[i]);
	}
	for(i=1;i<=n;i++)
	{
	int counter=0;
	for(b=1;b<=q[i];b++)
	{
		if((q[i]%b)==0)
		{
		counter++;
		}
    }
    if(counter==2)
		{
		printf("It is prime number:%d\n",q[i]);
		}
	if(counter!=2)
	{
		printf("It is not prime number:%d\n",q[i]);
	}
		
	}

}
