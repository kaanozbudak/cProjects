#include<stdio.h>

int main() 
{ 
      static int boyut,x,y,dizi[100],kontrol,i,aranan,alt,ust; 
      printf("Dizinin boyutunu giriniz :"); scanf("%d",&boyut); 
      for(i=0;i<boyut;i++) 
      { 
            printf("Sirali dizinin %d. elemanini giriniz :",i+1); scanf("%d",&dizi[i]); 
      } 
      printf("Aradiginiz elemani giriniz :"); scanf("%d",&aranan); 
      alt=0; 
      ust=boyut-1; 
      while(alt<=ust) 
      { 
           kontrol++; 
           y=(ust+alt)/2; 
           if(dizi[y]==aranan) 
           { 
                 printf("Aradiginiz eleman %d. siradadir.",y+1); 
                 break; 
           } 
           else if(dizi[y]<aranan) 
           { 
                 alt=y+1; 
           } 
           else if(dizi[y]>aranan) 
           { 
                 ust=y-1; 
           } 
      } 
      if(alt>ust) 
      { 
           printf("Aradiginiz eleman dizide bulunmamaktadir."); 
      } 
      return 0; 
}  
