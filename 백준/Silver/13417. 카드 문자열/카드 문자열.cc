#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<char> v(N);
        for (int i = 0; i < N; i++) {
            cin >> v[i];
        }
        
        deque<char> dq;
        dq.push_back(v[0]);
        char firstChar = v[0];
        for (int i = 1; i < N; i++) {
            if (firstChar < v[i]) {
                dq.push_back(v[i]);
            }
            else {
                dq.push_front(v[i]);
                firstChar = v[i];
            }
        }
        
        while (!dq.empty()) {
            cout << dq.front();
            dq.pop_front();
        }
        
        cout << "\n";
    }
    
    return 0;
}