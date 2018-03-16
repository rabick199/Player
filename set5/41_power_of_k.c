#include<stdio.h>
void main()
{
	int n,k;
	printf("Enter the N and K:");
	scanf("%d%d",&n,&k);
	if(n/k==k)
	{
		printf("\nYes Power of K is N");
	}
	else
	{
		printf("\nNo N is not Power of K");
	}
}
