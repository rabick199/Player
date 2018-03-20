#include<stdio.h>
 int main()
{
int n,i,j,m1=1,m2=1,a[5][5];
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
m1*=a[i][j];
   }
if(j==(n-i+1))
  {
m2*=a[i][j];
  }
 }
}
printf("\nThe sum of production of Diagonal is:");
printf("%d",m1+m2);
return 0;
}
