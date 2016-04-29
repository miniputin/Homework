#include <stdio.h>
#include <math.h>
#include <assert.h>
int main()
{
     float a, b, result;
     char c;
     printf ("Введите выражение: ");
     scanf ("%f%c%f", &a, &c, &b);
     
     switch (c)
 {
     case '+': result=a+b;
     printf("%.2f", result);
     break;
     case '-': result=a-b;
     printf("%.2f", result);
     break;
     case '*': result=a*b;
     printf("%.2f", result);
     break;
     case '/': assert(b !=0); 
     result=a/b;
     printf("%.2f", result);
     break;
     case '%': assert(b !=0); 
     result=(b*a)/100;
     printf("%.2f", result);
     break;
     case '^': result=pow(a,b);
     printf("%.2f", result);
     break;
     
 }
     return 0;
 }
 
