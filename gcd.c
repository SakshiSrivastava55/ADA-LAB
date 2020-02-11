#include<stdio.h>
int gcd(int m,int n)
{
if(m==n)
return m;
if(m>n)
return gcd(m-n,n);
else
return gcd(m,n-m);
}
void main()
{ int x,b,g;
printf("ENTER TWO NUMBERS\n");
scanf("%d%d",&x,&b);
g=gcd(x,b);
printf("THE GCD OF THE 2 NUMBERS IS:%d\n",g);
}

