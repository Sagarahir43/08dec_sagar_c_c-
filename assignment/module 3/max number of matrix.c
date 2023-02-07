#include<stdio.h>
int main()
{
	int i,j,max=0,array[2][2];
	printf("enter elements of matrix  \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter number of array[%d][%d] :" ,i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(max<array[i][j])
			{
				max=array[i][j];
			}
		}
	}
	printf("elements of matrix  \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
	printf("max number of matrix is :%d",max);
	
	
}
