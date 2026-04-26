#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int M;
        cin >> M;
        
        priority_queue<int> left; // 최대 힙
        priority_queue<int, vector<int>, greater<int>> right; // 최소 힙
        
        vector<int> result;
        
        for (int i = 1; i <= M; i++) {
            int x;
            cin >> x;
            
            if (left.empty() || x <= left.top()) {
                left.push(x);
            }
            else {
                right.push(x);
            }
            
            if (left.size() > right.size() + 1) {
                right.push(left.top());
                left.pop();
            }
            else if (left.size() < right.size()) {
                left.push(right.top());
                right.pop();
            }
            
            if (i % 2 == 1) {
                result.push_back(left.top());
            }
        }
        
        cout << result.size() << "\n";
        
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            
            if ((i + 1) % 10 == 0 || i == result.size() - 1) {
                cout << "\n";
            }
            else {
                cout << " ";
            }
        }
    }
    
    return 0;
}