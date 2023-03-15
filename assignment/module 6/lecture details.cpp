#include<iostream>
#include<stdio.h>
using namespace std;
class lecture
{
		
struct lec
{
	char lec_name[20];
	char sub_name[20];
	char lec_num[20];
	char lec_start_time[200];
	char lec_end_time[200];
}; 
  
public:
	char cource_name[20];
 	struct lec l[50];
	void getdata()
	{       
	    cout<<"\nenter cource name :";
			cin>>cource_name; 
		for(int i=1;i<=5;i++)
		{
			cout<<"\nenter "<<i;
			cout<<" lecturer name :";
			cin>>l[i].lec_name;
			cout<<"\nenter "<<i;
			cout<<" subject name :";
			cin>>l[i].sub_name;
			cout<<"\nenter "<<i;
			cout<<" lecture number :";
			cin>>l[i].lec_num;
		}	
	}

	void adddetails()
	{	
	    for(int i=1;i<=5;i++)
		{
			cout<<"\nenter "<<i;
			cout<<" lecture start time (00.00) :";
			cin>>l[i].lec_start_time;
			cout<<"\nenter "<<i;
			cout<<" lecture end time (00.00):";
			cin>>l[i].lec_end_time;
			
		}		
	}
	

	void showdata()
	{
	   	cout<<"\ncource name :"<<cource_name<<endl;
				for(int i=1;i<=5;i++)
		{
			cout<<""<<i;
			cout<<" lecturer name :"<<l[i].lec_name<<endl;
			cout<<""<<i;
			cout<<" subject name :"<<l[i].sub_name<<endl;
			cout<<""<<i;
			cout<<" lecture number :"<<l[i].lec_num<<endl;
			cout<<""<<i;
			cout<<" lecture time :"<<l[i].lec_start_time;
			cout<<" to "<<l[i].lec_end_time<<endl<<endl<<endl;
		}
	}


		
		 	
};

int main()
{
	
	lecture l1;
	l1.getdata();
	l1.adddetails();
	l1.showdata();
}

