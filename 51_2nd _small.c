#include<stdio.h>
void main()
{
	int a[100],n,i,j,t;
	printf("Enter the N:");
	scanf("%d",&n);
	printf("\n Enter the array:");
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
	printf("\n The second smallest number:%d",a[1]);
	
}
