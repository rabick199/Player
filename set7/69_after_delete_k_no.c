#include<stdio.h>
void main()
{
    int a[100],n,i,k;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("\nEnter the K value:");
    scanf("%d",&k);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array after deleting K numbers is:");
    for(i=0;i<n-k;i++)
    {
        printf("%d ",a[i]);
    }
}
    
