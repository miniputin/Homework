#include <stdio.h>

int main()
{
  int a, i;
  scanf("%i", &a);
  if(a > 100)
    a = 100;
  else if (a < 0)
    a = 0;
  printf("[");
  for(i = 0; i < a; i += 5)
    printf("=");
  for(i = 0; i < 100 - a; i += 5)
    printf("_");
  printf("]\n");
  return 0;
}
