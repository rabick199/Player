#include<stdio.h>
void main()
{
    char str[100],s[100];
    int i,count=0,k;
    printf("Enter strings:");
    scanf("%s%s",str[i],s[i]);
    printf("\n Enter k:");
    scanf("%d",&k);
    for(i=0;str[i]='\0'||s[i]!='\0';i++)
    {
        if(str[i]!=s[i])
        {
            count++;
        }
        if(k==count)
        {
            printf("\n Yes");
        }
        else
        {
            printf("\n No");
        }
    
}
