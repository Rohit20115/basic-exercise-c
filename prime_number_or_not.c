#include<stdio.h>
main()
{

    int i,count=0;
    int num;

    printf("Enter the number ");
    scanf("%d",&num);

    for ( i=1;i<=num;i++)
    {
        if (num%i==0)
        count++;
    }

    if (count>2)
    printf("This is not prime number");

    else
    printf("%d is prime ",num);


}