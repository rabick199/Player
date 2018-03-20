#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	int i,j,count,l,max=0,k;
	printf("Ente the string:");
	gets(a);
	l=strlen(a);
	for(i=0;i<l-1;i++)
	{
		count=1;
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(max<count)
		{
			max=count;
			k=i;
		}
	}
	printf("\nThe maximum number of occurence is:%c",a[k]);
	
	
}
