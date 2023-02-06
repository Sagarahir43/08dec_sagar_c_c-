#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int length;
	printf("enter your string : ");
	gets(string);
	printf("your entered string is : ");
	puts(string);
	length = strlen(string);
	printf("your string's length is : %d",length);
}
