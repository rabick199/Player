#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char a[100],b[100];
	int i,l,m,count=0;
	printf("Enter the strings:");
	gets(a);
	gets(b);
	l=strlen(a);
	m=strlen(b);
	if(l!=m)
	{
		printf("Not equal");
	}
	else
	{
		for(i=0;i<m;i++)
		{
		
			if(a[i]==b[i])
			{
				count++;
			}
		}
		if(count==m)
		{
			printf("Equal");
		}
		else
		{
			printf("Not Equal");
		}
	}
}
