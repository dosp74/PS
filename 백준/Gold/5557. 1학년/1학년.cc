#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }
    
    // dp[i][v] = i번째 숫자까지 사용했을 때 결과값이 v가 되는 경우의 수
    long long dp[101][21] = { 0 };
    dp[0][sequence[0]] = 1;
    
    for (int i = 0; i < N - 2; i++) {
        for (int v = 0; v <= 20; v++) {
            if (dp[i][v] == 0) {
                continue;
            }
            
            int plus = v + sequence[i + 1];
            int minus = v - sequence[i + 1];
            
            if (plus <= 20) {
                dp[i + 1][plus] += dp[i][v];
            }
            
            if (minus >= 0) {
                dp[i + 1][minus] += dp[i][v];
            }
        }
    }
    
    cout << dp[N - 2][sequence[N - 1]];
    
    return 0;
}