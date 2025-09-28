#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    // dp[i] = 돌이 i개 남았을 때 현재 차례의 승리 여부
    vector<bool> dp(N + 1, false);
    
    for (int i = 1; i <= N; i++) {
        bool result = false;
        
        if (i > 1 && !dp[i - 1]) {
            result = true;
        }
        
        if (!result && i > 3 && !dp[i - 3]) {
            result = true;
        }
        
        if (!result && i > 4 && !dp[i - 4]) {
            result = true;
        }
        
        dp[i] = result;
    }
    
    if (dp[N]) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }
    
    return 0;
}