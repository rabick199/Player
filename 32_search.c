 #include<stdio.h>
    void main()
    {
    int n,k,a[100],i,flag=0;
    printf("Enter the n & k:");
    scanf("%d%d",&n,&k);
    printf("\n Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k=a[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("\nPresent");
        
    }
    else
    {
        printf("\n Not present");
    }
    }

