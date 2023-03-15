#include<iostream>
using namespace std;

class account {
protected:
    string name;
    int acc_num;
    int balance;
    string acc_type;

public:
    account(string nam, int accnum, int bal, string acctype) {
        name = nam;
        acc_num = accnum;
        balance = bal;
        acc_type = acctype;
    }
};

class cur_acc : public account {
public:
    cur_acc(string name, int num, int bal) : account(name, num, bal, "current") {}

    void show_bal() 
	{
        cout << "your current account balance is: " << balance << endl;
    }

    void withdraw(int amount) 
	{
        if(amount > balance) 
		{
            cout << "insufficient balance.." << endl;
        }
        balance  = balance - amount;
        cout << "\n\nAmount withdraw successfully...." << endl << endl;
        cout << "Your Account balance is: " << balance << endl;
    }

    void checkminimum() 
	{
        if(balance < 1000) 
		{
            cout << "your balance is less than required minimum balance.." << endl;
            cout << "you have to pay penalty rs.50";
            balance = balance - 50;
            cout << "your account balance is: " << balance << endl;
        }
    }
};

class sav_acc : public account 
{
public:
    sav_acc(string name, int num, int bal) : account(name, num, bal, "saving") {}

    void deposit_amount(int amount) 
	{
        cout << "amount deposit: " << amount << endl;
        balance = balance + amount;
    }

    void show_balance() 
	{
        cout << "Your saving account balance is: " << balance << endl;
    }

    void interest(float interestrate) 
	{
        int interest;
        interest = balance * interestrate / 100;
        cout << "Interest on deposited amount is: " << interest << endl;
        balance = balance + interest;
         cout << "Account balance is: " << balance << endl;
    }

    void withdraw_amount(int amount) 
	{
        balance = balance - amount;
        cout << "Your account balance after withdrawn: " <<balance;
    }
};

int main() 
{
    cur_acc c("dharmesh", 780024, 40000);
    sav_acc s("sagar", 452652, 50000);
    c.show_bal();
    c.withdraw(4000);
    c.checkminimum();

    s.deposit_amount(4000);
    s.show_balance();
    s.interest(2.4);
    s.withdraw_amount(5000);

    return 0;
}

