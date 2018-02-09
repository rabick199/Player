#include<stdio.h>
void main()
{
    char a[100];
    int i;
    printf("\n Enter the string:");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
    if(isupper(a[i]))
    {
        a[i]=tolower(a[i]);
    }
    else
    {
        a[i]=toupper(a[i]);
    }
    }
    printf("\nThe string is:%s",a);
}
