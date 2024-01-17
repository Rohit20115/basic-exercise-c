#include<stdio.h>
main()
{
    int a,n,sum;
    sum=0;

    printf("Enter the number ");
    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {
        sum=sum+a;
    }
    printf("%d\t",sum);

}