#include <stdio.h>
#include<stdlib.h>

int main()
{
int temp;
int n=5;
int nums[n]={8,9,5,7,6};
	for(int i=0;i<n/2;i++)
	{
	temp=nums[i];	
	nums[i]=nums[n-i-1];
	nums[n-i-1]=temp;	
	}
	for(int i=0;i<n;i++)
	{
		printf("Tersten dizi:%d\n",nums[i]);
	}
}

