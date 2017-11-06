#include <stdio.h>
#include <stdlib.h>
main()
{
	int islem;
	int bakiye=1000;
	int tutar;
	printf("Islemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n");
	printf("Islemi Seciniz:""");
	scanf("%d",&islem);
	switch (islem)
	{
		case 1:
				printf("Bakiyeniz:%d\n",bakiye);
				printf("Cekilecek Tutar:");
				scanf("%d",&tutar);
				if(tutar > bakiye)
				{
				printf("Bakiye yetersiz");	
				}
				bakiye -=tutar;
				printf("Bakiyeniz: %d",bakiye);
				break;
		case 2:	
				printf("Bakiyeniz:%d\n",bakiye);
				printf("Yatiralacak Tutar:");
				scanf("%d",&tutar);
				bakiye +=tutar;
				printf("Bakiyeniz:%d",bakiye);
				break; 
		case 3:
				printf("Bakiyeniz:%d\n",bakiye);
				printf("Havale Yapilacak Tutar:");
				scanf("%d",&tutar);
				if(tutar > bakiye)
				{
				printf("Bakiye yetersiz\n");	
				}
				bakiye -=tutar;
				printf("Bakiyeniz: %d\n",bakiye);
				printf("Havale edilen tutar:%d",tutar);
				break;
		case 4:
				printf("Bakiyeniz:%d\n",bakiye);
		case 5:
				printf("Kartiniz iade edildi.\n");
				break;
		default:
				printf("Bilinmeyen Islem.\n");
	return 0;
}
}
