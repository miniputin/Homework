#include <stdio.h>

int main(void)
{
int sum,day,month,year;
printf("Enter the number of days \n");
scanf("%d", &sum);
years=sum/365;
month=(sum-365*year)/30.42;
days=sum-365*year-30.42*month;
printf("%d days= %d years, %d months, %d day\n",sum,day,month,year);
return 0;
}
