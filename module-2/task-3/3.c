#include <stdio.h>

int main()
{
  int a, b;
  scanf("%i", &a);
  scanf("%i", &b);
  
  while (a !=0 && b != 0)
  {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  printf("наибольший общий делитель=%i\n", a + b);
  return 0;

}
