#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<pair<int, int>> wire(N);
    
    for (int i = 0; i < N; i++) {
        cin >> wire[i].first >> wire[i].second;
    }
    
    sort(wire.begin(), wire.end());
    
    vector<int> dp(N, 1);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (wire[j].second < wire[i].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    
    int maxValue = *max_element(dp.begin(), dp.end());
    
    cout << N - maxValue;
    
    return 0;
}