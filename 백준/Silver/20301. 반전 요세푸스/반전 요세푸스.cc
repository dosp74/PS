#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K, M;
    cin >> N >> K >> M;
    
    deque<int> dq;
    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }
    
    int cnt = 0;
    bool isFront = true;
    
    while (!dq.empty()) {
        if (cnt == M) {
            isFront = !isFront;
            cnt = 0;
        }
        
        for (int i = 0; i < K; i++) {
            if (isFront) {
                if (i == K - 1) {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                    
                    continue;
                }
                
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else {
                if (i == K - 1) {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                    
                    continue;
                }
                
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        
        cnt++;
    }
    
    return 0;
}