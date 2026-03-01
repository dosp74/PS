#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000000;

long long dp[201][201]; // dp[i][j] = i개의 수를 사용해서 합이 j가 되는 경우의 수

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    for (int j = 0; j <= N; j++) {
        dp[1][j] = 1;
    }
    
    for (int i = 2; i <= K; i++) {
        for (int j = 0; j <= N; j++) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][j];
            }
            else {
                dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % MOD;
            }
        }
    }
    
    cout << dp[K][N] % MOD;
    
    return 0;
}