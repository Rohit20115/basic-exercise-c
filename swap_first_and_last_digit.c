#include<stdio.h>
#include<stdio.h>
main()
{
     int n,i,a;
 
     printf(" Enter the number");
     scanf("%d",&n);

     a=n%10;

     while(n>=9)
     {
         n=n/10;
     }
     int  sum=a+n;
     printf(" first term =%d \n Last term = %d \n sum of first and last term :%d",n,a,sum);


}