#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
      char cumle[100];
      int uzunluk,i;
      char harf;
      int sayac_sesli=0,sayac_sessiz=0;
    
      printf("Bir cumle giriniz (Turkce karakter kullanmayin , buyuk harf kullanabilirsiniz)\n");
      gets(cumle);
      
      uzunluk=strlen(cumle);
      
      for(i=0;i<uzunluk;i++){
       harf=cumle[i];
       if(harf=='a'||harf=='A'||harf=='e'||harf=='E'||harf=='i'||harf=='I'||harf=='o'||harf=='O'||harf=='u'||harf=='U'){
        sayac_sesli+=1;
    }
       else if(harf!=' '){
        sayac_sessiz+=1;
    }
   }
      
      printf(" Sesli Harf Sayisi = %d\n Sessiz Harf Sayisi = %d",sayac_sesli,sayac_sessiz); 

      getch();
}
