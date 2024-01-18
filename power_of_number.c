#include<stdio.h>
#include<stdio.h>
main()
{
  int  a, pow ,n,i;
  
  printf("Enter the number  :");
  scanf("%d",&n);
  printf("Enter the power ");
  scanf("%d",&a);

  pow =1;

  for(i=1;i<=a;i++)
  {
   pow=pow*n;
  }
  printf("the result is : %d",pow);

}