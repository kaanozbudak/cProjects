#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main ()

{
	float sayi;
	float kare;
	float kok;
	for(sayi=1;sayi<51;sayi++)
	{
	printf("sayi: %.1f ",sayi);
	kare=sayi*sayi;
	printf("kare: %.1f ",kare);
	kok=sqrt(sayi);
	printf("kok: %f \n",kok);

}
return 0;
}
