#include <stdio.h>
#include <stdlib.h>
int main ()
{   
	int i,n,j,number;
	int max,min,top,ort;
	float ilk,ikinci,ortiki;
	
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
	for(i=0;i<n;i++)
    {
		if( q[i]>max ) 
	    {
		  max = q[i]; 
		}
	}
	printf("Max Value = %d\n",max);
	min = q[0];
	for(i=0;i<n;i++)
	{
		if(q[i]<min)
		{
			min=q[i];
		}
	}
	printf("Min Value = %d\n",min);
	for(i=0;i<n;i++)
	{
		top+=q[i];
		ort=top/n;
	}
 	printf("Average = %d\n",ort); 
	for(j=0;j<n;j++)
	 {
	 	for(i=0;i<n;i++)
 		{
 			if(q[j]>=q[i])
               { 
    			   number=q[j];
                   q[j]=q[i];
                   q[i]=number;
                                                    }	
 		}
	 }
	 printf("Small to Large:\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",q[i]);
	 	printf("\n");
	 }
	 
 
 	
 	if(n%2==0)
 	{ 	
 		n=n-1;
 		ilk=q[(n/2)];
 		ikinci=q[(n/2)+1];
 		ortiki=(ikinci+ilk)/2.0;
 		printf("Median:%.2f\n",ortiki);
 		
 	}
 	else
 	{ 	n=n-1;
 		n=(n/2);
 		printf("Median:%d\n",q[n]);
 	}
   system("pause");
   return 0;
   	
}

