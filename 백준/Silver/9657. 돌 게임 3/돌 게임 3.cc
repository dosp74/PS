#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<bool> dp(1001); // dp[i] = i개의 돌이 남았을 때 상근이의 승리 여부
    dp[1] = true;
    dp[2] = false;
    dp[3] = true;
    dp[4] = true;
    dp[5] = true; // 3개를 먼저 가져가면 승리
    dp[6] = true; // 4개를 먼저 가져가면 승리
    dp[7] = false;
    
    for (int i = 8; i <= 1000; i++) {
        if (!dp[i - 1] || !dp[i - 3] || !dp[i - 4]) {
            dp[i] = true;
        }
        else {
            dp[i] = false;
        }
    }
    
    if (dp[N]) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }
    
    return 0;
}