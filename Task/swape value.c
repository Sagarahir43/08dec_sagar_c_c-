//wap to swap value
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b: ");
	scanf("%d%d", &a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n swap value of a is: %d \n and b is: %d", a,b);
	
}
