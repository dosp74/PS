#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    vector<int> temp(N);
    for (int i = 0; i < N; i++) {
        cin >> temp[i];
    }
    
    int window_sum = 0;
    for (int i = 0; i < K; i++) {
        window_sum += temp[i];
    }
    
    int max_sum = window_sum;
    for (int i = K; i < N; i++) {
        window_sum += temp[i] - temp[i - K]; // 슬라이딩 윈도우
        max_sum = max(max_sum, window_sum);
    }
    
    cout << max_sum;
    
    return 0;
}