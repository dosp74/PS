#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    int threshold = (M / 2) + 1;
    int result = 0;
    
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        
        int cnt = 0;
        
        for (char c : s) {
            if (c == 'O') {
                cnt++;
            }
        }
        
        if (cnt >= threshold) {
            result++;
        }
    }
    
    cout << result;
    
    return 0;
}