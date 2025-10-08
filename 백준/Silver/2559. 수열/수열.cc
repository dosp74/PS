#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    vector<int> temperatures(N + 1), prefix(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        cin >> temperatures[i];
        prefix[i] = prefix[i - 1] + temperatures[i];
    }
    
    int max_sum = INT_MIN;
    for (int i = K; i <= N; i++) {
        int current_sum = prefix[i] - prefix[i - K];
        max_sum = max(max_sum, current_sum);
    }
    
    cout << max_sum;
    
    return 0;
}