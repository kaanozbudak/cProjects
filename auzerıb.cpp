#include <stdlib.h>
#include <stdio.h>

int main ()

{
	int i,a,b,sonuc;
	printf("Please enter double value:\n");
	
	scanf("%d %d",&a,&b);
	
	for (i=1;i<=b;i++)
	{
		sonuc*=a;
	}
	printf("sonuc:%d",sonuc);
}
