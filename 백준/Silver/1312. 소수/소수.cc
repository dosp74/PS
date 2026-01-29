#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A, B, N;
    cin >> A >> B >> N;
    
    int remain = A % B;
    int digit = 0;
    
    for (int i = 0; i < N; i++) {
        remain *= 10;
        digit = remain / B;
        remain %= B;
    }
    
    cout << digit;
    
    return 0;
}