#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    float f1 = 1.23, f2 = 4.56;
    char c1 = 'a', c2 = 'b';

    cout << "Before swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "f1 = " << f1 << ", f2 = " << f2 << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

    swapValues(x, y);
    swapValues(f1, f2);
    swapValues(c1, c2);

    cout << "After swapping: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "f1 = " << f1 << ", f2 = " << f2 << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}

