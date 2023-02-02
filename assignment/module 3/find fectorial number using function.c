#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}

    int factnumber1=fact(n-1);
    int  factN=factnumber1*n;
    return factN;
}
    int main()
    {
    	int n;
    	printf("enter thr number of find factorial: ");
    	scanf("%d",&n);
    	printf("factorial number is: %d",fact(n));
    	return 0;
	}
