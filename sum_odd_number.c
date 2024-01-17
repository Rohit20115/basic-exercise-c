#include<stdio.h> 
main() 
{ 
    int i,n,sum=0; 
 
    printf("Enter the n number : "); 
    scanf("%d",&n); 
    for(i=1;i<=n;i+=2) 
    {
        sum=i+sum;
    } 
    printf("\n Sum of all odd number %d",sum);

}