#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> dp(1000001); // dp[i]는 i를 1로 만드는 최소 연산 횟수
    
    dp[0] = 0;
    dp[1] = 0;
    
    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1; // 1을 빼는 경우
        
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
        
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }
    
    cout << dp[N];
    
    return 0;
}