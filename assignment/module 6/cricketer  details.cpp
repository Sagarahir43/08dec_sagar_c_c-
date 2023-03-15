#include<iostream>
using namespace std;
class cricketer
{
public:	
	char name[20];
	int age;
	char country[20];
	int total_match;
};
class batsman :public cricketer
{
	int total_runs;
	int best_per;
	float ave_run;
	int total_match;
public:	
	void input_data()
	 {
	 	cout<<"Eneter Cricketer Name :";
	 	cin>>name;
	 	cout<<"Enter Age :";
	 	cin>>age;
	 	cout<<"Enter Country :";
	 	cin>>country;
	 	cout<<"Enter total match :";
	 	cin>>total_match;
	 	cout<<"Enter total run :";
	 	cin>>total_runs;
	 }
	 void cal_ave()
	 {
	 	ave_run = total_runs / total_match;
	 }
	 void display_data()
	 {
	 	cout<<"\nCricketer Name :"<<name;
	 	cout<<"\nAge :"<<age;
	 	cout<<"\nCountry :"<<country;
	 	cout<<"\nTotal Matches :"<<total_match;
	 	cout<<"\nTotal Runs :"<<total_runs;
	 	cout<<"\nAverage Runs :"<<ave_run;
	 }
};
int main()
{
	batsman b1;
	b1.input_data();
	b1.cal_ave();
	b1.display_data();
}
