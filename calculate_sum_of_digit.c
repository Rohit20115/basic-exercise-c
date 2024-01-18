#include<stdio.h>
main()
{

    int a, n,i,sum=0;
 
     printf("Enter the number :");
     scanf("%d",&n);

     for(i=n;i>0;i/=10)
     {
           sum = sum +i%10;
     }

      printf("Enter the number :%d",sum);

}