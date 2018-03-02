#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
void main()
{
	int a,f;
	printf("Enter the Number:");
	scanf("%d",&a);
	f=fact(a);
	printf("\n The factorial of given number is:%d",f);
}
