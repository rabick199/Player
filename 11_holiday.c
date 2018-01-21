#include<stdio.h>
void main()
{
char day[100][10];
int i,n;
printf("Enter limit:");
scanf("%d",&n);
for(i=;i<n;i++)
{
scanf("%s",day[i]);
}
for(i=;i<n:i++)
{
if(day[i]=="Monday")
printf("Yes");
else
printf("No");
}
}
