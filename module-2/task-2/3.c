#include <stdio.h>
int main()
{
char line[250];
printf("Please enter your line:\n");
scanf("%s", line);
printf("Size of you line is  %d bait\n", strlen(line)+1);
return 0;
}
