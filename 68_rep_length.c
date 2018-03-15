#include<stdio.h>
void main()
{
    int a[100],n,i,j,count,temp=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>temp)
        {
            temp=count;
        }
    }
    printf("\nThe length of longest repeatable number:%d",temp);
}
