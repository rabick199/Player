#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i;
	printf("\nEnter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			printf("%c",str[i]);
		}
	}
}
