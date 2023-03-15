#include <iostream>
#include <string>

using namespace std;

class ConcatenateStrings {
private:
    string str1;
    string str2;
public:
    ConcatenateStrings(string s1, string s2) : str1(s1), str2(s2) {}

    ConcatenateStrings operator+ (ConcatenateStrings const &obj) {
        string new_str1 = str1 + obj.str1;
        string new_str2 = str2 + obj.str2;
        return ConcatenateStrings(new_str1, new_str2);
    }

    void display() {
        cout << str1 << " " << str2 << endl;
    }
};

int main() {
    ConcatenateStrings s1("Hello,", "world!");
    ConcatenateStrings s2("How are you?", "I'm fine, thanks.");

    ConcatenateStrings concatenated_str = s1 + s2;
    concatenated_str.display(); 

    return 0;
}

