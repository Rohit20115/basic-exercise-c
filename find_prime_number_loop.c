#include<stdio.h>
main()
{

    int i,sum =0;
    int num,j;

    printf("Enter the number ");
    scanf("%d",&num);

    for( j=1;j<=num;j++)
    {
        int count =0;
        for ( i=1;i<=j;i++)
        {
            if (j%i==0)
            count++;
        }
        if(count==2)
        {
            sum=sum+j;
        }
    }

  printf(" sum of prime number : %d ",sum);

}