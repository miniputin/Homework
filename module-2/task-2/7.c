#include <stdio.h>

int main( )
{
 int  v, c, a = 14, b = 89, d = 6;
 scanf("%d", &v);
 for (c = 0; c < v; c++)
{ 
a = ((a*b+d) % v); 
printf("%d ", a); 
a=a+8;d=d+5;
}
 return 0;
}
