#include <stdio.h>
#include<stdlib.h>

int main()
{
int temp;
int n=5;
int nums[n]={8,9,5,7};
	for(int i=2;i<n;i++)
	{
	temp=nums[i];	
	nums[i]=nums[n+1];
	nums[n+1]=temp;
	}
	nums[2]={10};
	
	for(int i=0;i<n;i++)
	{
		printf("%d\n",nums[i]);
	}
}
