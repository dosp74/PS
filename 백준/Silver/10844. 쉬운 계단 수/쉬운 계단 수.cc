#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    // dp[i][j]는 길이가 i이고, 마지막 자리가 j인 계단 수의 개수
    vector<vector<int>> dp(N + 1, vector<int>(10));
    
    for (int j = 1; j <= 9; j++) {
        dp[1][j] = 1;
    }
    
    for (int i = 2; i <= N; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
            }
            
            if (j < 9) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MOD;
            }
        }
    }
    
    long long result = 0;
    
    for (int j = 0; j <= 9; j++) {
        result = (result + dp[N][j]) % MOD;
    }
    
    cout << result;
    
    return 0;
}