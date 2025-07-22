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
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        
        cout << gcd(num1, num2) << "\n";
    }
    
    return 0;
}