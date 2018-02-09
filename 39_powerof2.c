 #include<stdio.h>
 void main()
 {
     int n,i,mul=2,flag=0;
     printf("Enter the number:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         mul=mul*2;
         if(mul==n)
         {
             flag=1;
         }
     }
     if(flag==1)
     {
         printf("\n Yes");
     }
     else
     {
         printf("\n No");
     }
 }
