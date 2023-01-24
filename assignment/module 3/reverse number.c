# include<stdio.h>
int main()
{
	int n,i=0,r;
	printf("enter the number :");
	scanf("%d",&n);
	while(n != 0){
		r =n % 10;
		i= i * 10 + r;
		n/=10;
	}
	printf("reversed number =%d", i);
	
}
