#include <iostream>
using namespace std;
int main() {
    cout << "10 + 2 * 5 = " << 10 + 2 * 5 << "\n";
    cout << "(10 + 2) * 5 = " << (10 + 2) * 5 << "\n";
    cout << "20 / 4 + 3 * 2 = " << 20 / 4 + 3 * 2 << "\n";
    cout << "20 / (4 + 3) * 2 = " << 20 / (4 + 3) * 2 << "\n";
    float result = (10 + 5.5) * 2 / 3;
    cout << "(10 + 5.5) * 2 / 3 = " << result;
    return 0;
}
