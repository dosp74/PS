#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N, M;
    cin >> N >> M;
    
    vector<long long> trees(N);
    long long maxHeight = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> trees[i];
        maxHeight = max(maxHeight, trees[i]);
    }
    
    long long left = 0, right = maxHeight;
    long long answer = 0;
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long sum = 0;
        
        for (long long h : trees) {
            if (h > mid) {
                sum += (h - mid);
            }
        }
        
        if (sum >= M) {
            answer = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    cout << answer;
    
    return 0;
}