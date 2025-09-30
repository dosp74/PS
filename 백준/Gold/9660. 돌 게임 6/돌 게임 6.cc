#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    cin >> N;
    
    vector<bool> dp(22); // dp[i] = i개의 돌이 남았을 때 상근이의 승리 여부
    dp[1] = true;
    dp[2] = false;
    dp[3] = true;
    dp[4] = true;
    dp[5] = true;
    dp[6] = true;
    dp[7] = false;
    dp[8] = true;
    dp[9] = false;
    dp[10] = true;
    dp[11] = true;
    dp[12] = true;
    dp[13] = true;
    dp[14] = false;
    dp[15] = true;
    dp[16] = false;
    dp[17] = true;
    dp[18] = true;
    dp[19] = true;
    dp[20] = true;
    dp[21] = false;
    
    // 승 패 승 승 승 승 패가 계속 반복된다.
    
    if (N % 7 == 0) {
        cout << "CY";
    }
    else if (dp[N % 7]) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }
    
    return 0;
}