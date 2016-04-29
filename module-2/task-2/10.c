#include <stdio.h>
int main() 
{
printf("количество байтов  в\n");
printf("int = %zd;\n",sizeof (int));
printf("short = %zd;\n",sizeof (short));
printf("char= %zd;\n",sizeof (char));
printf("long = %zd;\n",sizeof (long));
printf("long long = %zd;\n",sizeof (long long));
printf("long double = %zd.\n",sizeof (long double));
printf("float = %zd;\n",sizeof (float));
printf("double = %zd;\n",sizeof (double));
return 0;
}
