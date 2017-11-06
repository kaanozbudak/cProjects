#include <stdlib.h>
#include <stdio.h>

main()
{
	int a;
	int b;
	
	for(a=1;a<100;a++)
	{
	int counter=0;
		for(b=1;b<=a;b++)
		{
			if((a%b)==0)
			{
			counter++;
			}
	    }
	   	    if(counter==2)
			{
			printf("c:%d\n",a);
			}
	}
}
