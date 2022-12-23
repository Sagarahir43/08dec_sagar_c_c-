#include<stdio.h>
int main()
{
	int number;
	int square;
	int cube;
	
	printf("enter value of number");
	scanf("%d", &number);
	
	square=number * number;
	cube=number * number * number;
	
	printf("the square of number is: %d \n", square);
	printf("the cube of number is : %d \n", cube);
	
}
