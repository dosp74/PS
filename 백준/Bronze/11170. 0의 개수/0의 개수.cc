#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        int cnt = 0;
        
        for (int i = N; i <= M; i++) {
            string s = to_string(i);
            
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == '0') {
                    cnt++;
                }
            }
        }
        
        cout << cnt << "\n";
    }
    
    return 0;
}