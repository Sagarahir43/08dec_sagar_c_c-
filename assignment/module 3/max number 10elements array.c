#include<stdio.h>
int main()
{
	int i,maximum=0,array[10];
	for(i=0;i<10;i++)
	{
		printf("array[%d]:",i);
		scanf("%d",&array[i]);
	}
	for(i=0;i<10;i++)
	{
		if(maximum < array[i])
		{
			maximum=array[i];
		}
	}
	printf("maximum of array is:%d",maximum);
}
