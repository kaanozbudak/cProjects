#include <stdlib.h>
#include <stdio.h>
// �ift say�lar
main()
{
	int b;
	int c;
	

	for (b=1;b<=10;b++)
	{	
		if((b%2)==0) 
		{
		 printf("%d",b);
		}
		for(c=1;c<=b;c++)
		{
			printf(" *");	
		}
		printf("\n");
	}

}
