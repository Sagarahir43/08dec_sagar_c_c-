#include<stdio.h>
struct Empdata
{
    int no;
    int age;
    char name[20];
    char address[100];
};
int main ()
{
	struct Empdata em[50];
	int i;
	for (i=0;i<5;i++)
	{
		printf("enter %d employee no : ",i);
		scanf("%d",&em[i].no);
		printf("enter %d employee name : ",i);
		scanf("%s",&em[i].name);
		printf("enter %d employee address : ",i);
		scanf("%s",&em[i].address);
		printf("enter age of employee : ",i);
		scanf("%d",&em[i].age);
	}
	for (i=0;i<5;i++)
	{
	   printf("\n no of employee :%d\n",em[i].no);
	   printf("name of employee :%s\n",em[i].name);
	   printf("address of employee :%s\n",em[i].address);
	   printf("age of employee :%d\n\n\",em[i].age);
	}
}


