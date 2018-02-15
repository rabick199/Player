
#include<stdio.h>
void main()
{
    
    int n,i;
    printf("Enter the N:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i%2!=0&&n%i==0)
        printf("%d",i);
    }
}

