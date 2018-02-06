#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,l;
    printf("\nEnter the string:");
    scanf("%s",str);
    l=strlen(str);
    printf("\nAfter reverse & removing vowels:")
    for(i=l-1;i>=0;i--)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            continue;
        }
        else
        {
           printf("%c",str[i]);
        }
    }
    
}
