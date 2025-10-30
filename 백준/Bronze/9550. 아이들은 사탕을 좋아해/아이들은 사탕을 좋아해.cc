#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        int result = 0;
        
        for (int i = 0; i < N; i++) {
            int candys;
            cin >> candys;
            
            result += candys / K;
        }
        
        cout << result << "\n";
    }
    
    return 0;
}