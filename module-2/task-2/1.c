#include <stdio.h>

int main()
{
int dday,day,month,year;
printf("Enter the number of days \n");
scanf("%d", &dday);
year=dday/ 365;
day=dday-365*year-30*month;
month=(dday-365*year)/ 30;
printf("%d day= %d years, %d months, %d day\n",dday,day,month,year);
return 0;
}
