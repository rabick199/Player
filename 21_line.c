#include<stdio.h>
void main()
{
    int x[100],y[100],n,i,j,flag=0;
    printf("Enter the no of points:");
    scanf("%d",&n);
    printf("\n Enter the points:");
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]!=x[j])
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("\nLine");
    }
    else
    {
        printf("\nNot Line");
    }
}

