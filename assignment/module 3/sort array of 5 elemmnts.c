#include<stdio.h>
int main()
{
	int i,a[5],b,j;
	printf("entre any five number in array : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\n enter sorting array =\n ");
	for(j=0;j<5;j++)
	{
		printf("%d",a[j]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	printf("\n array after sorting :\n ");
	for(j=4;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	
}
