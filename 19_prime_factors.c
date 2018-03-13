#include<stdio.h>
void main()
{
	int n,i,j,flag;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("\n The prime factors are:");
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flag=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					flag=1;
				}
			}
					if(flag==0)
		{
			printf("%d\t",i);
		}
		}

	}
}
