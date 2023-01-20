#include<stdio.h>
int main()
{
	int j,i,k,l;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(l=k-2;l>=1;l--)
		{
			printf("%d",l);
		}printf("\n");
	
	
	}
}
