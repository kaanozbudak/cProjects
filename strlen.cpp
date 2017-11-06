#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main ()
{ 
	char name [15];
	int k;
	gets(name);
	printf("Your name is ");
	puts(name);
	k=strlen(name);
	printf("Your name contains %d characters\n",k);
	strupr(name);
	printf("Your name is %s \n",name);

	return 0;
	}
	
