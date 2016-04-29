#include <stdio.h>
#include <math.h>

int main(void)
{
  int x1, x2, x3, y1, y2, y3;
  int l1, l2, l3;
  printf("x1 y1: ");
  scanf("%i %i", &x1, &y1);
  printf("x2 y2: ");
  scanf("%i %i", &x2, &y2);
  printf("x3 y3: ");
  scanf("%i %i", &x3, &y3);

  l1 = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
  l2 = (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2);
  l3 = (x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1);

  if((l1 > l2 && l1 > l3 && l1 == l2 + l3) || (l2 > l1 && l2 > l3 && l2 == l1 + l3) || (l3 > l1 && l3 > l2 && l3 == l2 + l1))
    printf("Треугольник прямоугольный\n");
  else 
    printf("Треугольник не прямоугольный\n");
  return 0;
}
