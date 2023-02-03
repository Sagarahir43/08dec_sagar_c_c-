#include<stdio.h>
int main()
{
	int matrixA[2][2],matrixB[2][2],sumofmatrix[2][2];
	int i,j;
	printf("enter value of matrixA: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter value of matrixA[%d][%d]",i,j);
			scanf("%d",&matrixA[i][j]);
		}
	}
	printf("enter value of matrixB: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter value of B[%d][%d] ",i,j);
			scanf("%d",&matrixB[i][j]);
		}
		
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sumofmatrix[i][j]=matrixA[i][j] + matrixB[i][j];
		}
    }
	  printf("Sum of matrix is : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",sumofmatrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
