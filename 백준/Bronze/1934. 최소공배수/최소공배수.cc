#include <iostream>
using namespace std;

int gcd(int a, int b) { // 유클리드 호제법(최대공약수)
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

int lcm(int a, int b) { // 최소공배수
    return a * b / gcd(a, b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        
        cout << lcm(A, B) << "\n";
    }
    
    return 0;
}