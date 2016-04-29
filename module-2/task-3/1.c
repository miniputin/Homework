#include <stdio.h>

int main()
{
  char str[256];
  char c;
  int i;
  scanf("%s", str);
  c = str[0];
  for(i = 1; i < strlen(str); i++)
  {
    if (str[i] > c)
      c = str[i];
  }
  printf("%c\n", c);
  return 0;
}
