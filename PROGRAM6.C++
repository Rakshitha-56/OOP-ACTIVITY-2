#include <iostream>
using namespace std;
int main() {
    int n = 20;
    cout << "Initial value = " << n << "\n";
    n += 5;
    cout << "After += 5 : " << n << "\n";
    n -= 3;
    cout << "After -= 3 : " << n << "\n";
    n *= 2;
    cout << "After *= 2 : " << n << "\n";
    n /= 4;
    cout << "After /= 4 : " << n << "\n";
    n %= 3;
    cout << "After %= 3 : " << n;
    return 0;
}
