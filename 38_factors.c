#include<stdio.h>
void main()
{
    
    int n,i;
    printf("Enter the N:");
    scanf("%d",&n);
    printf("\n The even factors are:");
    for(i=1;i<=n;i++)
    {
        if(n%i==0&&i%2==0)
        {
            printf("%d\t",i);
        }
    }
}
