#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
printf("%d",fact(n));
}
int fact(int n)
{
if(n==0)
return 1;
else
return n*fact(n-1);
}
