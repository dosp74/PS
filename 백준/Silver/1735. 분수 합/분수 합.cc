#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

int main() {
    int A1, B1, A2, B2;
    cin >> A1 >> B1 >> A2 >> B2;
    
    int A3, B3;
    A3 = A1 * B2 + A2 * B1;
    B3 = B1 * B2;
    
    int g = gcd(A3, B3);
    cout << A3 / g << " " << B3 / g;
    
    return 0;
}