#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    vector<int> dp(41); // dp[i] = i번째 피보나치 수
    dp[0] = 0;
    dp[1] = 1;
    
    for (int i = 2; i <= 40; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    
    while (T--) {
        int N;
        cin >> N;
        
        if (N == 0) {
            cout << 1 << " " << 0 << "\n";
            
            continue;
        }
        
        cout << dp[N - 1] << " " << dp[N] << "\n";
    }
    
    return 0;
}