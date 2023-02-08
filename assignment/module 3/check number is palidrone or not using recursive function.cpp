#include<stdio.h>
int pal(int n, int temp)
{
	if(n==0)
	{
		return temp;
	}
	temp=(temp*10)+(n%10);
	return pal(n/10,temp);
}
int main()
{
	int n,p;
	printf("enter the number : ");
	scanf("%d",&n);
	p=pal(n,0);
	if (p==n)
	{
		printf("%d is palindrome number : ",n);
		
	}
	else 
	{
		printf("%d is not palidrome number ",n);
	}
}
