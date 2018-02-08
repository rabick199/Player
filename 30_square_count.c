#include<stdio.h>
void main()
{
    int l,r,i,s,count=0;
    printf("Enter the l & r:");
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
       s=i*i;
       if(l<s&&r>s)
       {
           count++;
       }
    }
    printf("%d",count);

    
}
