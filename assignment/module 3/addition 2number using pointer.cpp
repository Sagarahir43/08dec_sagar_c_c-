#include<stdio.h>
int main()
{
	int  firstnumber,secondnumber,*a,*b,sum;
	printf("enter two number add\n");
	scanf("%d%d",&firstnumber,&secondnumber);
	a=&firstnumber;
	b=&secondnumber;
	sum=*a + *b;
	printf("sum of the numbers :%d\n",sum);
	return 0;
}
