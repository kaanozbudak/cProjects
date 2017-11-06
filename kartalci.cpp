#include <stdio.h>
#include <stdlib.h>
int main ()
{   
	int i,n;
	int max,min,top,ort;
	
	
	top=0;
	
	printf("How many numbers:\n");
	scanf("%d",&n);
	printf("Your numbers:\n");
	int q[n];
	for (i=0;i<n;i++)
	{
	scanf("%d",&q[i]);
	}
	max = q[0];
	for(i=1;i<n;i++)
    {
		if( q[i]>max ) 
	    {
		  max = q[i]; 
		}
	}
	printf("Max Value = %d\n",max);
	min = q[0];
	for(i=1;i<n;i++)
	{
		if(q[i]<min)
		{
			min=q[i];
		}
	}
	printf("Min Value = %d\n",min);
	for(i=1;i<n;i++)
	{
		top+=q[i];
		ort=top/n;
	}
 	printf("Average = %d\n",ort);
   
   	
}

