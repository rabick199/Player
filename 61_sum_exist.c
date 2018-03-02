#include<stdio.h>
void main()
{
	int a[100],n,x,i,j,flag=0;
	printf("Enter the N:");
	scanf("%d",&n);
	printf("\nEnter the X:");
	scanf("%d",&x);
	printf("\nEnter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==x)
			{
				flag=1;
			}
		}
	}
	if(flag==1)
	{
		printf("\n YES");
	}
	else
	{
		printf("\n NO");
	}
}
