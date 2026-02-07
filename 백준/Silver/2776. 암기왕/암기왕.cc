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
        
        unordered_set<int> note1;
        note1.reserve(N * 2); // rehash 방지
        
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            note1.insert(x);
        }
        
        int M;
        cin >> M;
        
        for (int i = 0; i < M; i++) {
            int x;
            cin >> x;
            
            if (note1.find(x) != note1.end()) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
    }
    
    return 0;
}