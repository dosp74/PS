#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    cin >> N;
    
    long long base = 2, result = 1, exp = N + 1;
    
    while (exp) {
        if (exp & 1) {
            result = result * base % MOD;
        }
        
        base = base * base % MOD;
        exp >>= 1;
    }
    
    cout << (2 * (result - 2) - 1) % MOD;
    
    return 0;
}