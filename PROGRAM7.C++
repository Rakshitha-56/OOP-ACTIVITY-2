#include <iostream>
using namespace std;
int main() {
    int a = 5;
    cout << "Pre-increment (++a) = " << ++a << "\n";
    a = 5;
    cout << "Post-increment (a++) = " << a++ << "\n";
    cout << "Value after post-increment = " << a << "\n";
    int b = 5;
    cout << "Pre-decrement (--b) = " << --b << "\n";
    b = 5;
    cout << "Post-decrement (b--) = " << b-- << "\n";
    cout << "Value after post-decrement = " << b;
    return 0;
}
