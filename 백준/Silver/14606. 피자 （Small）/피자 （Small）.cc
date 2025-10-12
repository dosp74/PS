#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> dp(N + 1, 0);
    
    for (int n = 2; n <= N; n++) {
        for (int i = 1; i < n; i++) {
            dp[n] = max(dp[n], i * (n - i) + dp[i] + dp[n - i]);
        }
    }
    
    cout << dp[N];
    
    return 0;
}