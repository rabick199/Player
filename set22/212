#include<stdio.h>
 int main()
{
int n,i,j,s1=0,s2=0,a[5][5];
printf("Enter the N:");
scanf("%d",&n);
printf("\nEnter the array:");
for(i=1;i<=n;i++)
 {
for(j=1;j<=n;j++)
  {
scanf("%d",&a[i][j]);
  }
 }
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
 {
if(i==j)
   {
s1+=a[i][j];
   }
if(j==(n-i+1))
  {
s2+=a[i][j];
  }
 }
}
printf("\nThe production of sum of Diagonal is:");
printf("%d",s1*s2);
return 0;
}
