#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 42; 
    cout << "The value of the integer is " <<*ptr<<endl;

    delete ptr; 

    return 0;
}
