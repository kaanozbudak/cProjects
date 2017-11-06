#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
main ()
{
	int day,month,year;
	printf("Please enter date:");
	scanf("%d %d %d", &day, &month,&year);
	
	if (day==30&&month==12)
	{
		printf("Tomorrow date: %d.%d.%d",day-29,month-11,year+1);
	return 0;
	}
	
	if (day==30)
	{
		printf("Tomorrow date:  %d.%d.%d",day-29,month+1,year);
		return 0;
	}
	else {
		printf("Tomorrow date:  %d.%d.%d",day+1,month,year);
	}


}
