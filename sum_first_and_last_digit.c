#include<stdio.h>
#include<stdio.h>
main()
{
     int n,i,a;
 
     printf(" Enter the number");
     scanf("%d",&n);

     a=n%10;

    for(n=1;n>=10;n--)
    {
        n=n/10;
    }
    int  sum=a+n;
    printf(" first term =%d \n Last term = %d \n sum of first and last term :%d",n,a,sum);


}