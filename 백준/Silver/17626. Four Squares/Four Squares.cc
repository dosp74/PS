#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0; // dp[i] = i를 만들기 위한 최소 제곱수 개수
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1); // + 1은 지금 쓴 제곱수 1개
        }
    }
    
    cout << dp[n];
    
    return 0;
}