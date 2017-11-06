#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main ()
{
	char sentence[100];
	int acount=0;
	int chars;
	int vowels=0;
	int a,i;
	printf("Give me a sentence\n");
	gets(sentence);
	puts(sentence);
	chars=strlen(sentence);
	printf("Your sentence contains %d characters\n",chars);
	for(i=0;i<chars;i++)
	{
		if(sentence[i]='A'||sentence[i]=='E'||sentence[i]=='O'||sentence[i]=='U'||sentence[i]=='I') 
		acount++;
	}
	printf("Vowels number is %d",acount);
	
}
