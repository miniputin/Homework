#include <stdio.h>

int main()
{
char str[256], new_str[256];
char c;
int i, j = 0;
scanf("%s", str);
for(i = 0; i < strlen(str); i++)
 {
    if(str[i] == str[i+1])
    continue;
    else 
 {
    new_str[j] = str[i];
    j++;
 }
 }
  new_str[j] = '\0';
  printf("%s\n", new_str);
  return 0;
 }
