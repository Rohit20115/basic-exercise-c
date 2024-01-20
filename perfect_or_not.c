#include <stdio.h>
main()
{

    int  j,i,  sum;

    printf("Enter the number : ");
    scanf("%d", &i);

    sum = 0;

    for(j=1; j<i; j++)
	{
	    if(i  % j == 0)
	    {
		    sum += j;
	    }
	}

	if(sum == i)

	{
	    printf(" this is prefect Number %d ", i);
	}
	else
	printf("this is not perfect Number");


}
