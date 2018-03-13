#include<stdio.h>

void main()
{
	int a[100];
	int i,j,count=0,k;
	printf("Enter the limit:");
	scanf("%d",&k);
	printf("\n Enter the array:");
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		   
		}
		 if(count==0)
		    {
		    
		    	printf("\nThe unique number: %d",a[i]);
			}
	}
	
}
