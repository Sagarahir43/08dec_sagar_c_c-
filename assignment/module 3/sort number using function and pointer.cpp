#include<stdio.h>
void sort(int n,int *ptr)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+j)<*(ptr+i))
			{
			    temp=*(ptr+i);
				*(ptr+i)=*(ptr+j)	;
				*(ptr+j)=temp;
			}
		}
		
	}
	printf("numbers sort in assending order : ");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
	}
}
int main()
{
	int arr[100];
	int n,i;
	for(i=0;i<100;i++)
	{
	     printf("enter the number of arr[i]",i);
		 scanf("d",arr[i]);	
	}
	sort(n,arr);
}
