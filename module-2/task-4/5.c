#include <stdio.h>
int main()
{
float m,n,k,l,q,w,e,y,R1,R2,x;
printf("Введите сопротивления для A: \n");
scanf("%f%f", &m,&n);
printf("Введите сопротивления для B: \n");
scanf("%f%f", &k,&l);
q=m+n;
w=k+l;
e=m*n-k*l;
y=m*l*+k*n;
R1=(e*q-w*y)/(q*q+w*w);
R2=(w*e+q*y)/(q*q+w*w);
printf("Cопротивление %.2f + (%.2f)*i \n",R1,R2 );
return 0;
}
