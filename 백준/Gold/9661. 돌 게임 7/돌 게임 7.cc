#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    cin >> N;
    
    vector<bool> dp(26); // dp[i] = 돌이 i개 남았을 때 상근이의 승리 여부
    dp[1] = true;
    dp[2] = false;
    dp[3] = true;
    dp[4] = true;
    dp[5] = false;
    dp[6] = true;
    dp[7] = false;
    dp[8] = true;
    dp[9] = true;
    dp[10] = false;
    dp[11] = true;
    dp[12] = false;
    dp[13] = true;
    dp[14] = true;
    dp[15] = false;
    dp[16] = true;
    dp[17] = false;
    dp[18] = true;
    dp[19] = true;
    dp[20] = false;
    dp[21] = true;
    dp[22] = false;
    dp[23] = true;
    dp[24] = true;
    dp[25] = false;
    
    // 승 패 승 승 패가 반복된다.
    
    if (N % 5 == 0) {
        cout << "CY";
    }
    else if (dp[N % 5]) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }
    
    return 0;
}