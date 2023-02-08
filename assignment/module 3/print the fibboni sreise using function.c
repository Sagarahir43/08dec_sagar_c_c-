#include<stdio.h>
int fib(int n)
{
    if (n==0)
    {
    	return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
	int a = fib( n-1 );
	int b = fib(n -2);
	int FibOfN = a + b;
    return FibOfN;
    }
}
int main()
{
	int n,i;
    printf("enter number for print fibonocci : ");
    scanf("%d",&n);
     printf(" fibonocci of %d is : ",n);
    for(i=0;i<n;i++)
   
    {
    	printf("%d ,",fib(i));
	}
   
	return 0;
}


