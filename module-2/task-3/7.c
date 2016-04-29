#include <stdio.h>

double Cnk(int n,int k)
{
 double sum = 1, i = 0;
 for (i = 1; i <= k; i++)
 sum*=(n-i+1)/(double)i;
 return sum;
}

int main ()
{ 
 int A[100];
 int n, i, j;
 scanf("%i", &n);
 for (i = 0; i <= n; i++)
 {
 for (j = 0; j <= i; j++)
 printf("%.0f ", Cnk(i,j));
 printf("\n");
 }
 return 0; 
 }
 
