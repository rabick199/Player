#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,i,count=0,j;
    char str[100],sub[100];
    printf("Enter the N and M:");
    scanf("%d%d",&n,&m);
    printf("\nEnter the string 1:");
     for(i=0;i<n;i++)
      {
      	 scanf("%c",&str[i]);
	  }
    printf("\nEnter the Substring:");
    for(i=0;i<m;i++)
      {
      	 scanf("%c",&sub[i]);
	  }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(str[i]==sub[i])
            {
                count++;
            }
        }
    }
    if(count==m)
    {
        printf("\nYes Substring");
    }
    else
    {
        printf("\nNo Not a substring");
    }
    
}
