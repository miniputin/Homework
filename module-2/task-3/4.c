#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, D;
  
  printf("ax^2 + bx + c\n");
  printf("a: ");
  scanf("%i", &a);
  printf("b: ");
  scanf("%i", &b);
  printf("c: ");
  scanf("%i", &c);
  
  D = b*b - 4 * a * c;
  if(D > 0)
  {
    double x1 = (-1 * (b + sqrt(D))) / (2 * a);
    double x2 = (sqrt(D) -b) / (2 * a);
    printf("x1: %f, x2: %f\n", x1, x2);
  } 
  else if(D = 0)
  {
    double x = (-1 * b) / (2 * a);
    printf("x: %f\n", x);
  }
   else
    {
    printf("Нет решения: дискриминант меньше нуля.\n");
  }
  return 0;
}
