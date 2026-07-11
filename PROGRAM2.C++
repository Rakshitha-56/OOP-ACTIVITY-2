#include <iostream>
using namespace std;
int main() {
    int a = 100;
    long long b = 1234567890123;
    unsigned int c = 500;
    cout << "Integer = " << a << "\n";
    cout << "Long Long = " << b << "\n";
    cout << "Unsigned Integer = " << c << "\n";
    cout << "Size of int = " << sizeof(a) << " bytes\n";
    cout << "Size of long long = " << sizeof(b) << " bytes\n";
    cout << "Size of unsigned int = " << sizeof(c) << " bytes";
    return 0;
}
