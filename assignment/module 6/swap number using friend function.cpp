#include <iostream>
using namespace std;

class Numbers 
{
private:
    int num1, num2;

public:
    Numbers(int a, int b) 
	{
        num1 = a;
        num2 = b;
    }

    friend void swap(Numbers& n);

    void display() 
	{
        cout << "Num1 = " << num1 << endl;
        cout << "Num2 = " << num2 << endl;
    }
};

void swap(Numbers& n) 
{
    int temp = n.num1;
    n.num1 = n.num2;
    n.num2 = temp;
}

int main() 
{
    Numbers n(10, 20);
    cout << "Before swapping: " << endl;
    n.display();

    swap(n);

    cout << "After swapping: " << endl;
    n.display();

    return 0;
}
