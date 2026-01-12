#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    
    deque<int> dq;
    for (int i = N; i > 0; i--) {
        int num = N - i + 1;
        
        if (A[i] == 1) {
            dq.push_back(num);
        }
        else if (A[i] == 2) {
            if (dq.empty()) {
                dq.push_back(num);
            }
            else {
                int temp = dq.back();
                dq.pop_back();
                dq.push_back(num);
                dq.push_back(temp);
            }
        }
        else { // A[i] == 3
            dq.push_front(num);
        }
    }
    
    while (!dq.empty()) {
        cout << dq.back() << " ";
        dq.pop_back();
    }
    
    return 0;
}