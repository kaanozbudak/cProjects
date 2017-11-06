#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{	
	int sayi1,sayi2,a;
	printf("Please enter two numbers:\n");
	scanf("%d %d",&sayi1,&sayi2);
	a=sayi1/sayi2;
	printf("Bolum:%d\n",a);
	sayi1%=sayi2;
	printf("Kalan:%d",sayi1);
}
