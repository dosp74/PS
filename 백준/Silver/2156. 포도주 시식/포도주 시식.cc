#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> input(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> input[i];
    }
    
    if (n == 1) {
        cout << input[1];
        
        return 0;
    }
    
    if (n == 2) {
        cout << input[1] + input[2];
        
        return 0;
    }
    
    // dp[i]는 i번째 포도주 차례일 때, 최대로 마실 수 있는 포도주의 양
    vector<int> dp(n + 3, 0);
    dp[1] = input[1];
    dp[2] = dp[1] + input[2];
    dp[3] = max(dp[2], max(dp[1] + input[3], input[2] + input[3]));
    
    for (int i = 4; i <= n; i++) {
        dp[i] = max(dp[i - 1], max(dp[i - 2] + input[i], dp[i - 3] + input[i - 1] + input[i]));
    }
    
    cout << dp[n];
    
    return 0;
}