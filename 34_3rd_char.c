 #include<stdio.h>
 void main()
 {
     char str[100];
     int i;
     printf("Enter the string:");
     scanf("%s",str);
     printf("The String is:%c",str[0]);
     for(i=3;str[i]!='\0';i=i+3)
     {
         printf("%c",str[i]);
     }
 }
