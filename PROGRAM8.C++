#include <iostream>
using namespace std;
int main() {
    int a = 10;
    float b = a;          
    int x = 5;
    float y = 2.5;
    float sum = x + y;    
    float c = 9.8;
    int d = (int)c;       
    int m = 5, n = 2;
    float div = (float)m / n;   
    cout << "Implicit int to float = " << b << "\n";
    cout << "Implicit arithmetic = " << sum << "\n";
    cout << "Explicit float to int = " << d << "\n";
    cout << "Explicit int division to float = " << div;
    return 0;
}
