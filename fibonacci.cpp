#include <stdio.h>
#include <stdlib.h>

int f1(int a);
int main()
{	
	int a=20;

	int result=f1(a);
	printf("%d",result);
}
int f1(int a)
{	
	int top=0;

		for(a=1;a<=100;a++)
	{
		top=top+a;
	//	printf("toplam=%d",top);
	printf("\n %d \n",top);
	}
}
