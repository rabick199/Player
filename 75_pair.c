#include<stdio.h>
void main()
{
	int n,a[100],i,j,count=0;
	printf("Enter the N:");
	scanf("%d",&n);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				count++;
			}
		}
	}
	printf("\nThe possible number of pairs are:%d",count);
	
}
