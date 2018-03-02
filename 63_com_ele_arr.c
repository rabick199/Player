#include<stdio.h>
void main()
{
	int a[100],b[100],n,i;
	printf("Enter the N:");
	scanf("%d",&n);
	printf("\nEnter %d elements into A:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter %d elements into B:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n The common elements are:");
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			printf("%d\t",a[i]);
		}
	}
	
}
