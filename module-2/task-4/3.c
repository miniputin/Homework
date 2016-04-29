#include <stdio.h>
#include <iostream>
int main()
{
int n,a=0,b=1,mem;
cin>>n;
if(n==1) cout<<a<<' ';
if(n>=2) cout<<a<<' '<<b<<' ';
for(int i=0;i<n-2;i++)
{
mem=a;
a=b;
b=a+mem;
cout<<b<<' ';
}
 return 0;
}
