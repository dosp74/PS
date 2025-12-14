#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long pow_mod(long long base, long long exp) {
    long long result = 1;
    
    while (exp) {
        if (exp & 1) {
            result = result * base % MOD;
        }
        
        base = base * base % MOD;
        exp >>= 1;
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N, M;
    cin >> N >> M;
    
    long long answer;
    
    if (M == 1) {
        answer = pow_mod(2, N) - 1;
    }
    else {
        long long temp = pow_mod(2, N + 1);
        answer = (M * (temp - 2) - 1) % MOD;
    }
    
    if (answer < 0) {
        answer += MOD;
    }
    
    cout << answer;
    
    return 0;
}