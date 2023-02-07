#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=4;i>=1;i--)
	{
		for(k=i;k<4;k++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
}
