#include <stdio.h>
int main(void)
{
int day,month,put;
day=3;
month=6;
put=day;
day=month;
month=put;
printf("%d/%d",day,month);
return 0;
}
