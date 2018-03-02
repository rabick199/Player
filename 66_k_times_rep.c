#include<stdio.h>
void main()
{
	int a[100],n,i,j,t,count=1,k;
	printf("Enter the N:");
	scanf("%d",&n);
	printf("\nEnter the K:");
	scanf("%d",&k);
	printf("\nEnter %d elements into A:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n The K times repeated numbers are:");
    for(i=0;i<n-1;i++)
    {
    	count=1;
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]==a[j])
    		{
    			count++;
			}
		}
		if(count==k)
		{
			printf("%d\t",a[i]);
		}
	}
	
}
