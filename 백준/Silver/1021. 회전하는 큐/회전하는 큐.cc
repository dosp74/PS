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
    
    vector<int> v;
    for (int i = 1; i <= M; i++) {
        int number;
        cin >> number;
        v.push_back(number);
    }
    
    int cnt = 0;
    
    for (int n : v) {
        if (dq.front() == n) {
            dq.pop_front();
            
            continue;
        }
        
        int idx;
        
        for (int i = 0; i < dq.size(); i++) {
            if (dq[i] == n) {
                idx = i + 1;
                
                break;
            }
        }
        
        if (dq.size() % 2 == 0) {
            if (idx > (dq.size() / 2)) {
                while (dq.front() != n) {
                    int temp = dq.back();
                    dq.push_front(temp);
                    dq.pop_back();
                    cnt++;
                }
            }
            else {
                while (dq.front() != n) {
                    int temp = dq.front();
                    dq.push_back(temp);
                    dq.pop_front();
                    cnt++;
                }
            }
        }
        else {
            if (idx <= (dq.size() / 2) + 1) {
                while (dq.front() != n) {
                    int temp = dq.front();
                    dq.push_back(temp);
                    dq.pop_front();
                    cnt++;
                }
            }
            else {
                while (dq.front() != n) {
                    int temp = dq.back();
                    dq.push_front(temp);
                    dq.pop_back();
                    cnt++;
                }
            }
        }
        
        dq.pop_front();
    }
    
    cout << cnt;
    
    return 0;
}