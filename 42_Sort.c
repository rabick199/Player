#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,n,a[100],flag=0,count=0;
    printf("Enter N:");
    scanf("%d",&n);
    printf("\nEnter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                flag=1;
            }
            else
            {
                count=1;
            }
        }
    }
    if(flag==1&&count==0)
    {
        printf("\n Yes");
    }
    else
    {
        printf("\n No");
    }
}
