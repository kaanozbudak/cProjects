#include <stdio.h>
#include <math.h>
#include<stdlib.h>
 
int main(void){

   int i,N;
   float sapmaDizisi[5];	
   float  toplam = 0, aritmetikOrt, standartSapma;			
 
   printf("Kac Elemanin Standart Sapmasi Hesaplansin : ");		
   scanf("%d",&N);
 
   sapmaDizisi[N];		
 
   for(i=0; i<N; i++){
      printf("%d. Elemani Giriniz : ",i+1);			
      scanf("%f",&sapmaDizisi[i]);
   }
 
   for(i = 0;i<N;i++){
	   toplam += sapmaDizisi[i];		
   }
   aritmetikOrt = toplam/N;	
 
   
   for(toplam = 0.0, i=0; i<N; i++){
       toplam += pow((sapmaDizisi[i]-aritmetikOrt),2);		
   }
 
   standartSapma = sqrt(toplam/(N-1));		
   printf("Ortalama=%f\n",aritmetikOrt);		
   printf("Standart sapma = %f\n",standartSapma);
 
   system("PAUSE");
  return 0;
}
