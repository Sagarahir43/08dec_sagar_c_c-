#include<stdio.h>
int main()
{
	int i,j,k;
	for (i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		
		for(k=i;k<5;k++)
		{
			printf("  ");
		}
		
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
		
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=i;k<5;k++)
		{
			printf("  ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
