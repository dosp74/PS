#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K, N;
    cin >> K >> N;
    
    vector<long long> LANs(K);
    long long maxLength = 0;
    
    for (int i = 0; i < K; i++) {
        cin >> LANs[i];
        maxLength = max(maxLength, LANs[i]);
    }
    
    long long left = 1, right = maxLength;
    long long answer = 0;
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cnt = 0;
        
        for (long long l : LANs) {
            cnt += l / mid;
        }
        
        if (cnt >= N) {
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