 #include<stdio.h>
    #include<string.h>
    void main()
    {
    char s[30];
    int i,count=0,l;
    printf("Enter the string:");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
    if(isdigit(s[i]))   
    {
    count++;
    }
    }
    if(count==l)
    printf("\nNumeric");
    else
    printf("\n Not Numeric");
    }
