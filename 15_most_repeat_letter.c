#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,j,l,count=0,max=0,k;
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
		    if(count>max)
		    {
		    	max=count;
		    	k=i;
			}
		}
	}
	printf("\nThe most repeatable character is %c",str[k]);
}
