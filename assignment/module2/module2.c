#include<stdio.h>
int main()
{
	float p,r,n,si,ci;
	
	printf("enter value of p");
	scanf("%f" , &p);
	
	printf("enter value of r");
	scanf ("%f", &r);
	
	printf("enter value of n");
	scanf ("%f", &n);
	
	si=p * r * n / 100;
	printf("the simple interst is:%f\n", si);
	
	ci=p*pow((1+r/100),n)-p;
	printf ("the compound interst is:%f\n" , ci);
	
}
