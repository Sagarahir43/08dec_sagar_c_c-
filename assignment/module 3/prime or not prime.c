#include<stdio.h>

int main()
{
	int n,i,a=0;
	printf("enter number to check prime or not prime");
	scanf("%d",&n);
	for(i=2;i<=n/2;++i){
		if(n%i==0){
			a=1;
			break;
		}
	}
	if(a==0)
	printf("%d,is prime number.",n);
	else{
		printf("%d,is not prime number.",n);
	}
}
