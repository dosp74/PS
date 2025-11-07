#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 1;
        
        return 0;
    }
    
    if (n == 2) {
        cout << 2;
        
        return 0;
    }
    
    // 마지막에 타일을 채우는 방법은 두 가지
    // 마지막에 세로 타일 1개를 채우는 경우의 수 - 세로 타일 1개를 제외하면 n - 1개를 채우는 경우의 수
    // 마지막에 가로 타일 2개를 채우는 경우의 수 - 가로 타일 2개를 제외하면 n - 2개를 채우는 경우의 수
    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;
    
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    
    cout << dp[n];
    
    return 0;
}