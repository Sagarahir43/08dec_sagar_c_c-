#include<iostream>
using namespace std;
class account 
{
public:
	
	char name[20];
    int acc_num;
    int balance;
    getdata()
    {
    	
    	cout<<"enter your name :";
    	cin>>name;
    	cout<<"enter your account nnumber :";
    	cin>>acc_num;
    	cout<<"Enter your account balance :";
    	cin>>balance;
    	
	}
  
};
class cur_acc:public account
{
public:
      currunt()
      {
    int choice;
	int amount;

     if(balance < 1000)
	{
	 	balance = balance - 500;
	 	cout<<"Your account balance is less than 1000 and according to the terms you have to pay penalty \n";
	 	cout<<"Now your account balance is:"<<balance;
	 	cout<<"\n1. For withdraw \n2. For deposite \n";
		cout<<"Enter your choice :";
		cin>>choice;
		switch(choice)
		{
			case 1 :
			    
			    	
			       	cout<<"Enter Amount you want to withdraw :";
			       	cin>>amount;
			       	if(balance < amount)
			       	{
			       		cout<<"Insufficient balance";
					}
			       	balance = balance - amount;
			       	cout<<"Your account balance is \n:"<<balance;
				
				
								break;
		    case 2 :
				
					cout<<"Enter amount you want to deposite :";
					cin>>amount;
					balance = balance  + amount;
					cout<<"Your Account balance is:"<<balance;
					
				
				
								break;
				default:
			   
					{
						cout<<"Invalid Choice..";
					}
			    						    
			           			break;
		}
		cout<<"\n your check book number is :458";
	}	
	else
	{
		cout<<"1. For withdraw \n2. For deposite";
		cout<<"Enter your choice :";
		cin>>choice;
		switch(choice)
		{
			case 1 :
			    
			    	
			       	cout<<"Enter Amount you want to withdraw :";
			       	cin>>amount;
			       	if(balance < amount)
			       	{
			       		cout<<"Insufficient balance";
					}
			       	balance = balance - amount;
			       	cout<<"Your account balance is :"<<balance;
				
				
								break;
		    case 2 :
	
					cout<<"Enter amount you want to deposite :";
					cin>>amount;
					balance = balance  + amount;
					cout<<"Your Account balance is:"<<balance;
					
				
				
								break;
				default:
				
					{
						cout<<"Invalid Choice..";
					}
			    						    
			           			break;           			
		}
		cout<<"Your check book number is :457";
	}
	  }
};
class sav_acc :public account
{
public:
		saving()
		{
		  int choice;
	      int amount;
		  cout<<"1. For Withdraw\n2. For Deposite \n";
		  cout<<"Enter Your Choice :";
		  cin>>choice;
		  switch(choice)
		{
			case 1:
					
					cout<<"Enter amount you want to Withdraw :";
					cin>>amount;
					balance = balance - amount;
					cout<<"Amount withdraw succesfull.....";
					
								 break;
			case 2:
					cout<<"Enter Amount you want to deposite :\n";
					cin>>amount;
					balance  = amount + balance;
					cout<<"Amount deposite Succesfull...\n\n\n";
					
					
								break;
								
						default :
						{
							cout<<"Invalid Choice";
						}		     
		}
		}
		
};
int main()
{
	int choice;
	cur_acc a1;
	sav_acc a2;
	
	cout<<"1. For currunt account \n2. For saving Account \n";
	cout<<"Enter Your choice :";
	cin>>choice;
	switch(choice)
	{
		case 1:
		       a1.getdata();
		       a1.currunt();
		       cout<<"NAME :"<<a1.name<<endl;
		       cout<<"ACCOUNT NUMBER :"<<a1.acc_num<<endl;
		       cout<<"BALANCE :"<<a1.balance<<endl;
		       
		       break;
		       
		case 2:
		       a2.getdata();
			   a2.saving();  
			    cout<<"\nNAME :"<<a2.name<<endl;
		       cout<<"ACCOUNT NUMBER :"<<a2.acc_num<<endl;
		       cout<<"BALANCE :"<<a2.balance<<endl;
			   
			   break;
			   
		default:
		   {
		   	  cout<<"enter valid choice :";
		   }    
	}

}
