#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,l,count=0,j;
	printf("Enter the string:");
	gets(str);
	l=strlen(str);
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
	}
	if(count==0)
	{
		printf("Not Repeated");
	}
	else
	{
		printf("Repeated");
	}
}
