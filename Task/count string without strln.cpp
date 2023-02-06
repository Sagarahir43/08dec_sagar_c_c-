#include<stdio.h>
int main()
{
	int i=0,j,n=0;
	char string[100];
    printf("enter value of string : ");
    gets(string);
    printf("count of string  is :");
	
	 
	for (i=0;string[i]!=0;i++)
	{
		n++;
	}
	printf("%d",n);
}
