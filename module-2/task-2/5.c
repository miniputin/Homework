#include <stdio.h>
int main()
{
float a, b, c, d, u, v;
printf("Введите числа \n");
scanf("%g%g", &a,&b);
c = a+b;
d = a-b;
u = a*b;
v = a/b;
printf("Сумма = %d, разность = %d, произведение = %d, частное = %d \n", c, d, u, v);
return 0;
} 
