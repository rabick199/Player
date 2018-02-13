#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],st[100];
    int open=0,close=1,i,l;
    printf("Enter the brackets:");
    scanf("%s",str);
    l=strlen(str);
    if(str[0]==')'||str[l-1]=='(')
    {
        printf("\nInvalid");
    }
    
    for(i=0;i<l-1;i++)
    {
        if(str[i]=='(')
        {
            open++;
        }
      if(str[i]==')')
        {
            close++;
        }
    }
    printf("%d%d",open,close);
    if(open==close)
    {
        printf("\n Valid");
    }
    else
    {
        printf("\n Invalid");
    }
    
    
}


