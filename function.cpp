#include <stdio.h>
#include <stdlib.h>

int f1(int a,int b);
int f2(int a,int b);
int f3(int a,int b);
int f4(int a,int b);

int main()
{
	
	int k,a,b,c,d,e,l,o,x,y,z;
	
	
	scanf("%d %d",&a,&b);
	k=f1(a,b);
	x=f2(a,b);
	y=f3(a,b);
	z=f4(a,b);
	o=f1(a,b)*f3(a,b);
 	printf("%d///%d///%d///%d///%d",k,x,y,z,o);
 	
}
//int f1=c int f2=d int f3=e int f4=l

int f1(int a,int b)
{
	int c;
	c=a+b;
	
	return c;
}
int f2(int a,int b)
{
	int d;
	d=a-b;
	
	return d;
}
int f3(int a,int b)
{
	int e;
	e=a*b;
	
	return e;
}
int f4(int a,int b)
{
	int l;
	
	l=a/b;
	
	return l;
}
