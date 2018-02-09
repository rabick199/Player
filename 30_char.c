#include<stdio.h>
void main()
{
    char str[100],s[100];
    int i,count=0,k;
    printf("Enter strings:");
    scanf("%s",&s[i]);
    printf("\n Enter string2:");
    scanf("%s",&str[i]);
    printf("\n Enter k:");
    scanf("%d",&k);
    for(i=0;str[i]='\0'||s[i]!='\0';i++)
    {
        if(str[i]!=s[i])
        {
            count++;
        }
    }
    printf("%d",count);
        if(k==count)
        {
            printf("\n Yes");
        }
        else
        {
            printf("\n No");
        }
    
    
}
