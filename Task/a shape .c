#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=6;i++)
	{
		for (j=0;j<6;j++)
		{
			if (i==0 && (j==1 || j==2 || j==3 || j==4) )
			{
				printf("a");
			}
		    else if((j==0 || j==5) && i!=0)
			{
				printf("a");
			}
			else if( (j==1 || j==2 || j==3 || j==4) && i==3)
			{
				printf("a");
			}
			else 
			{
				printf(" ");
			}
		} printf("\n");
	}
}
