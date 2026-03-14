#include <bits/stdc++.h>
using namespace std;

long long dp[31][31]; // dp[w][h], 남은 알약 개수(whole, half)

long long solve(int w, int h) {
    if (w == 0 && h == 0) {
        return 1;
    }
    
    long long& ret = dp[w][h];
    
    if (ret != -1) {
        return ret;
    }
    
    ret = 0;
    
    if (w > 0) {
        ret += solve(w - 1, h + 1);
    }
    
    if (h > 0) {
        ret += solve(w, h - 1);
    }
    
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    memset(dp, -1, sizeof(dp));
    
    int N;
    cin >> N;
    
    while (N != 0) {
        cout << solve(N, 0) << "\n";
        
        cin >> N;
    }
    
    return 0;
}