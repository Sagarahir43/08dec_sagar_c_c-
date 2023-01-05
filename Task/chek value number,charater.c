#include <stdio.h>
int main ()
{
	char ab;
	printf("enter any charater: ");
	scanf("%c" ,&ab);
	
	if((ab>='a'&&ab<='z')||(ab>='A'&&ab<='Z'))
	{
		printf (" alphabet.");
		
	}
	else if ( ab>='0' &&ab  <='9')
	{
		printf (" number.");
	}
	else
	{
		printf ("spical charater");
		
	}
	
	
	
	
}
