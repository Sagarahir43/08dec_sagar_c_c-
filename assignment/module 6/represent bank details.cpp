#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class bank
{
     char name[100];
     int acc_no;
     char acc_type[100];
     float acc_bal;
public:
	    bank(char *nm,int accno,float accbal,char *acctype)
	    {
	    	accbal = 50000;
	    	acc_no=accno;
	    	strcpy(name, nm);
	    	strcpy(acc_type,acctype);
	    	acc_bal = accbal;
	    	
		}
		void getdata();
		void deposit();
		void withd_amount();
		void showdata();
};
       	void bank::getdata()
		{
			cout<<"enter your name : ";
			cin>>name;
			cout<<"enter account number :";
			cin>>acc_no;
			cout<<"enter account type :";
			cin>>acc_type;
			cout<<"balance available in your account:"<<acc_bal;
			
		}
		void bank::deposit()
		{
			int depo_amount;
			cout<<"enter amount want to deposite :";
			cin>>depo_amount;
			acc_bal = acc_bal + depo_amount;
		}
		void bank::withd_amount()
		{
			int withdraw;
			cout<<"enter amount you want to withdraw :";
			cin>>withdraw;
			if(withdraw>acc_bal)
			{
				printf("insufficient balance:");
			}
			acc_bal = acc_bal - withdraw;
	    }
		void bank::showdata()
		{
			cout<<"NAME :"<<name<<endl;
			cout<<"ACCOUNT NUMBER :"<<acc_no<<endl;
			cout<<"ACCOUNT TYPE :"<<acc_type<<endl;
			cout<<"ACCOUNT BALANCE :"<<acc_bal<<endl;
		}

		
		int main()
		{
			char name[100];
			int acc_no;
            char acc_type[100];
            float acc_bal;
			int choice;
			bank b1(name,acc_no,acc_bal,acc_type);
		    b1.getdata();
		    cout<<endl;
		    cout<<endl;
		    do
			{
			
		    cout<<"1. FOR DEPOSITE AMOUNT"<<endl;
		    cout<<"2. FOR WITHDRAW AMOUNT"<<endl;
		    cout<<"3. FOR SEEN YOUR ACCOUNT DETAILS"<<endl;
		    cout<<"4. EXIT"<<endl;
		    cout<<"ENTER YOUR CHOICE :";
		    cin>>choice;
		    cout<<endl;
		    cout<<endl;
		    
		    	switch(choice)
		    	{
		    		case 1:
		    			cout<<endl;
		    			cout<<endl;
		    			b1.deposit();
		    			cout<<"AMOUNT DEPOSITE SUCCESFULL..";
		    			cout<<endl;
		    			cout<<endl;
		    			break;
		    			
		    		case 2:
		    			cout<<endl;
		    			cout<<endl;
					    b1.withd_amount();
					    cout<<"AMOUNT WITHDRAW SUCCESFULL...";
					    cout<<endl;
						cout<<endl;
						break;
						
					case 3:
						cout<<endl;
		    			cout<<endl;
					    b1.showdata();
					    cout<<endl;
					    cout<<endl;
						break;
						
					default:
					      cout<<"THANK YOU FOR VISIT US"<<endl;cout<<"HAVE A NICE DAY";			
		    			
		        }
		    }
		    while (choice<4);
			
		   
		    
		   
		}
