#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string write, read;
    ofstream out;
    out.open("D:\\C_C++PROGRAME\\test.txt");
    cout<<"Enter the string:";
    cin>>write;
    out<<write;
    out.close();
    ifstream in("D:\\C_C++PROGRAME\\test.txt");
    in>>read;
    cout<<read;
    in.close();
    return 0;
}
