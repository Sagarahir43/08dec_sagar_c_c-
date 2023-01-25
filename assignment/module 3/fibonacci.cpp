#include<stdio.h>
int main()
{
	int i,a,b,c,n;
	printf("enter the limit : ");
	scanf("%d",&n);
	a=0;
	b=1;
	c=0;

	for(i=1;i<=n;i++)
	{   
		printf("%d ,",c);
		a=b;
		b=c;
		c=a+b;
	}
}
