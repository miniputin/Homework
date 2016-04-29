#include <stdio.h>
int main() 
{
int a,b,c;
printf("Enter the number ");
scanf("%d",&c);
while (c!=0)
{
b+=c%10;
c/=10;
a=a+1;
}
printf(" %d\n%d\n%.3f\n", a, b, (float)b/(float)a);
return 0;
}
