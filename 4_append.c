#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i;
printf("Enter the string:");
scanf("%s",&str);
i=strlen(str);
str[i]='.';
printf("\n The string with . is:%s",str);
}

