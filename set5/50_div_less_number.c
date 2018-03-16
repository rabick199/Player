#include<stdio.h>
void main()
{
	int n,i,flag=0
	;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	   if(n%i==0)
	   {
	   	flag=1;
		   }	
	}
	if(flag==1)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
}
