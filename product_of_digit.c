#include<stdio.h>
main()
{


    int n,mul,a;
 
    printf("Enter the number ");
    scanf("%d",&n);

    mul=1;
    
    while(n>0)
    {
        a=n%10;
        mul=mul*a;
        n/=10;
    }
    
    printf(" %d",mul);

}