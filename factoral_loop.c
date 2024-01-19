#include<stdio.h>
main()
{
    
     int n,i,a;
     printf("Enter the number ");
     scanf("%d",&n);

     for ( i=1;i<=n;i++)
     {  
         a=n%i;
         if(a==0)
         printf(" %d",i);
     }


}