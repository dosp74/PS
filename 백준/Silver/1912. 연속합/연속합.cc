#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> dp(n); // dp[i]는 i번째 원소에서 끝나는 최대 연속 부분합
    dp[0] = arr[0];
    int result = dp[0];
    
    for (int i = 1; i < n; i++) {
        dp[i] = max(arr[i], dp[i - 1] + arr[i]);
        result = max(result, dp[i]);
    }
    
    cout << result;
    
    return 0;
}