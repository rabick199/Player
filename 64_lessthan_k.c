#include<stdio.h>
void main()
{
	int a[100],n,i,j,k,t;
	printf("Enter the N:");
	scanf("%d",&n);
	printf("\nEnter the K:");
	scanf("%d",&k);
	printf("\nEnter %d elements into A:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n The less than K numbers are: ");
	for(i=0;i<n;i++)
	{
		if(a[i]<k)
		{
			printf("%d\t",a[i]);
		}
	}

	
}
