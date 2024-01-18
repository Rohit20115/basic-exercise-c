#include<stdio.h>
main()
{

     int n,a,rev,or;

     printf(" Enter the number");
     scanf("%d",&n);

      rev=0;

     while(n>0)
     {
          rev=rev*10+n%10;
          n/=10;
     }

        printf(" \n rerverse number = %d ",rev);


}