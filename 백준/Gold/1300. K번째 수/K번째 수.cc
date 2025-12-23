#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N, k;
    cin >> N >> k;
    
    long long left = 1, right = k;
    long long answer;
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cnt = 0;
        
        for (int i = 1; i <= N; i++) {
            cnt += min(N, mid / i);
        }
        
        if (cnt >= k) {
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    
    cout << answer;
    
    return 0;
}