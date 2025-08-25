#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<vector<int>> numbers(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> numbers[i][j];
        }
    }
    
    vector<vector<int>> dp(n, vector<int>(n));
    
    dp[0][0] = numbers[0][0];
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int currentMaxValue;
            
            if (j == 0) {
                currentMaxValue = dp[i - 1][j];
            }
            else if (j == i) {
                currentMaxValue = dp[i - 1][j - 1];
            }
            else {
                currentMaxValue = max(dp[i - 1][j - 1], dp[i - 1][j]);
            }
            
            dp[i][j] = currentMaxValue + numbers[i][j];
        }
    }
    
    sort(dp[n - 1].begin(), dp[n - 1].end(), greater<int>());
    
    cout << dp[n - 1][0];
    
    return 0;
}