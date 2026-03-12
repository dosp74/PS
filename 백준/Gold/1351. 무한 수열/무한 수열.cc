#include <bits/stdc++.h>
using namespace std;

long long N, P, Q;
unordered_map<long long, long long> dp;

long long solve(long long n) {
    if (n == 0) {
        return 1;
    }
    
    if (dp.count(n)) { // map에 n이 존재하면
        return dp[n];
    }
    
    return dp[n] = solve(n / P) + solve(n / Q);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> P >> Q;
    
    cout << solve(N);
    
    return 0;
}