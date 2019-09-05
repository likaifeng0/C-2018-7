#include<stdio.h> 
main()
{
     int i,j,n=9;
     for(i=1;i<=n;i=i+2)
     {
         for(j=1;j<=n-i;j++)
         {
             printf(" ");
         }
         for(j=0;j<i;j++)
         {
             printf("* ");
         }
         printf("\n");
     }
     for(i=n-1;i>0;i=i-2)
     {
         for(j=1;j<=n-i;j++)
         {
             printf(" ");
         }
         for(j=0;j<i-1;j++)
         {
             printf(" *");
         }
         printf("\n");} 
     }

