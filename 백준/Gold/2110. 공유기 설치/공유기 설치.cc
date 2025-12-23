#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, C;
    cin >> N >> C;
    
    vector<long long> houses(N);
    for (int i = 0; i < N; i++) {
        cin >> houses[i];
    }
    
    sort(houses.begin(), houses.end());
    
    long long left = 1, right = houses[N - 1] - houses[0];
    long long answer;
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        
        long long last = houses[0];
        int cnt = 1;
        
        for (int i = 1; i < N; i++) {
            if (houses[i] - last >= mid) {
                cnt++;
                last = houses[i];
            }
        }
        
        if (cnt >= C) {
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