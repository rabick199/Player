#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,j,n,k;
    char str[100];
    printf("Enter the string:");
    scanf("%s",&str);
    n=strlen(str);
    printf("\nEnter the Key:");
    scanf("%d",&k);
    j=n-k;
    while(j<n)
    {
        printf("%c",str[j]);
        j++;
    }
    while(i<n-k)
    {
        printf("%c",str[i]);
        i++;
    }
}

