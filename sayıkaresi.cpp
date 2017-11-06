#include <stdio.h>
#include <stdlib.h>

main ()
{

   	int i,j;
    for(i=0;i<3;i++) 
	{
    for(int k=0;k<2-i;k++)
    printf(" ");
    for(j=0;j<2*i+1;j++) {
    printf("X");
}
    printf("\n");
}
for(i=1;i>=0;i--) { // algoritmanýn tersten iþleme mantýgý burada baslamaktadýr
for(int k=1-i;k>=0;k--)
printf(" ");
for(j=2*i;j>=0;j--)
printf("X");
printf("\n");
}
return 0;
}
