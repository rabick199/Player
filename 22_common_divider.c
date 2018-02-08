#include<stdio.h>
void main()
{
    int n,k,i,c;
    printf("Enter the numbers:");
    scanf("%d%d",&n,&k);
    for(i=1;i<=n||i<=k;i++)
    {
        if(n%i==0&&k%i==0)
        {
          c=i;  
        }
    }
    printf("\n The common divider is:%d",c);
    
}
