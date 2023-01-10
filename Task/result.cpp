#include<stdio.h>
int main()
{
	float eng,guj,com,total,percentage;
	printf("enter marks of eng between 0-100 : ");
	scanf("%f",&eng);
	printf("enter marks of guj between 0-100 : ");
	scanf("%f",&guj);
	printf("enter marks of com between 0-100 : ");
	scanf("%f", &com);
	if(guj,eng,com>=33)
	{printf("student is pass\n");

	total = guj+eng+com;
	printf("total is =%f\n", total);
	
	percentage= total/3;
	printf("percentage =%f\n",percentage);

	if(percentage>=33&&percentage<60)
	          {printf("pass class \n");}
	 else if(percentage<=80&&percentage>60)
	               {printf("second class\n");}
        	else if(percentage<=100&&percentage>80)
	                  {printf("first class \n");}
	
	}
	else{printf("fail");
	}



	return 0;
}
