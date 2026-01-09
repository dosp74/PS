#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    deque<int> dq;
    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }
    
    int cnt = 0;
    
    while (M--) {
        int target;
        cin >> target;
        
        int idx = 0;
        while (dq[idx] != target) {
            idx++;
        }
        
        int left = idx;
        int right = dq.size() - idx;
        
        if (left <= right) {
            while (left--) {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        else {
            while (right--) {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
        
        dq.pop_front();
    }
    
    cout << cnt;
    
    return 0;
}