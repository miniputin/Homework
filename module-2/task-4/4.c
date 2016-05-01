#include <stdio.h>
int main()
{
int h,N;
printf("Количество пар: ");
scanf("%d",&N);
int v=74,c=5, a = 14, b=89, d=6;
for(h=1;h<=N;h++)
	{
		a = ((d*b+c) % v);
		b=b+10;d=d+7;
		c= ((d*b+c) % v);
		printf("%d          %d",a,c);
                if(a>c) {printf("               %d\n",a);} 
                else printf("               %d\n",c);
		b=b+9;d=d+2;
		
	}
return 0;
}
