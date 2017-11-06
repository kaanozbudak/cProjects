#include <stdio.h>
#include <stdlib.h>

int main()
{

int i,j,n,m;
int matris[100][100];
printf("Please enter n:");
scanf("%d",&n);
printf("Please enter m:");
scanf("%d",&m);
printf("Please enter satir");
for(i=0;i<n;i++)
{
	scanf("%d",matris[i]);
}
printf("Please enter sutun");
for(j=0;j<n;j++)
{
	scanf("%d",matris[j]);
}

for (i=0;i<n;i++)
{
	for(j=0, j<m; j++ )
	{
		printf("%d ",matris[i][j]);
	}
	printf("\n");
}

return 0;
}
