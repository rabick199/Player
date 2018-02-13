
#include<stdio.h>
void main()
{
char str[100],s[100];
int i,count=0,k;
printf("Enter two strings:");
scanf("%s%s",&str,&s);
printf("\n Enter the K:");
scanf("%d",&k);
for(i=0;str[i]!='\0'||s[i]!='\0';i++)
{
if(s[i]!=str[i])
count++;
}
if(count==k)
printf("Yes");
else
printf("No");
}
