#include <iostream>
using namespace std;
int main() {
    int a = 10;
    float b = 3.14;
    double c = 9.99;
    char d = 'A';
    bool e = true;
    cout << "Integer = " << a << "\n";
    cout << "Float = " << b << "\n";
    cout << "Double = " << c << "\n";
    cout << "Character = " << d << "\n";
    cout << "Boolean = " << e << "\n";
    cout << "Size of int = " << sizeof(a) << " bytes\n";
    cout << "Size of float = " << sizeof(b) << " bytes\n";
    cout << "Size of double = " << sizeof(c) << " bytes\n";
    cout << "Size of char = " << sizeof(d) << " bytes\n";
    cout << "Size of bool = " << sizeof(e) << " bytes";
    return 0;
}
