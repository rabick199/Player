#include<stdio.h>
#include<conio.h>
void main()
{
	char day[100];
	printf("Enter the day:");
	gets(day);
	if(day=="saturday"||day=="sunday")
	{
		printf("\nYes Holiday");
	}
	else
	{
		printf("\nNo Holiday");
	}
}
