#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> T(N + 2), P(N + 2);
    for (int i = 1; i <= N; i++) {
        cin >> T[i] >> P[i];
    }
    
    vector<int> dp(N + 2, 0); // dp[i] = i일부터 N일까지 얻을 수 있는 최대 수익
    
    // 뒤에서부터 dp 채우기
    for (int i = N; i >= 1; i--) {
        int nextDay = i + T[i];
        
        if (nextDay <= N + 1) {
            // 상담 가능
            dp[i] = max(dp[i + 1], P[i] + dp[nextDay]);
        }
        else {
            // 상담 불가능
            dp[i] = dp[i + 1];
        }
    }
    
    cout << dp[1];
    
    return 0;
}