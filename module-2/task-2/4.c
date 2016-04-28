#include <stdio.h>
int main()
{
char l[1000];
  int h, i;
  printf("Enter the line:\n");
  scanf("%s", l);
 h=strlen(l);
 for(i=0; l[i] !=0; i++)
 l[i]=l[i]-32;
 printf("Result:\n%s\n", l);
return 0;
}
