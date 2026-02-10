#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    vector<char> wheel(N, '?');
    vector<bool> used(26, false);
    
    int pos = 0;
    
    for (int i = 0; i < K; i++) {
        int S;
        char C;
        cin >> S >> C;
        
        pos = (pos - (S % N) + N) % N;
        int idx = C - 'A';
        
        if (wheel[pos] != '?' && wheel[pos] != C) {
            cout << "!";
            
            return 0;
        }
        
        // 같은 문자가 다른 위치에 있는 경우
        if (wheel[pos] == '?' && used[idx]) {
            cout << "!";
            
            return 0;
        }
        
        wheel[pos] = C;
        used[idx] = true;
    }
    
    for (int i = 0; i < N; i++) {
        cout << wheel[(pos + i) % N];
    }
    
    return 0;
}