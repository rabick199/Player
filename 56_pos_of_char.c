#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char a[100],c;
	int i,l;
	printf("Enter the string:");
	gets(a);
	printf("\nEnter the Character:");
	scanf("%c",&c);
	l=strlen(a);
	printf("\n The position of %c is:",c);
	for(i=0;i<l;i++)
	{
		if(a[i]==c)
		{
			printf("%d",i+1);
		}
	}
}
