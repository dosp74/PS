#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<long long> dp(N + 1);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    
    for (int i = 3; i <= N; i++) {
        dp[i] = (i - 1) * (dp[i - 2] + dp[i - 1]) % 1000000000;
    }
    
    cout << dp[N];
    
    return 0;
}