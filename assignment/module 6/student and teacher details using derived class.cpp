#include<iostream>
#include<string.h>
using namespace std;
class person
{
public:
	int age ;
	char name[20];
	void stu(int a,char *n)
	{
		age  = a;
		strcpy(name,n);
		cout<<"\nDetails of the student :";
		cout<<"\n--------------------------";
		cout<<"\nname :"<<name;
		cout<<"\nage :"<<age;
		
	}
	void teacher(int a,char *n)
	{
		age = a;
		strcpy(name,n);
		cout<<"\n\n\nDetails of the Teacher :";
		cout<<"\n--------------------------";
		cout<<"\nname :"<<name;
		cout<<"\nage :"<<age;
	}
};
class student :public person
{
public:
	float percentage;
	void per(float p)
	{
		int a;
		char n[20];
		percentage = p;
	 
	cout<<"\npercentage :"<<percentage;
	    
	}

};
class teach:public person
{
public:
 	int salary;
 	void sala(int s)
 	{
 		salary = s;
	    cout<<"\nsalary :"<<salary;
	     
	}
	
};
int main()
{
	student s1;
	teach t1;
	s1.stu(19,"dharmesh");
	s1.per(50.00);
	t1.teacher(20,"sumit");
	t1.sala(50000);
    
	
}
