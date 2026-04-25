#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S;
    cin >> S;
    
    int N = S.size();
    
    // prefix[i][c]: S[0]부터 S[i - 1]까지 c가 나온 횟수
    vector<vector<int>> prefix(N + 1, vector<int>(26, 0));
    
    for (int i = 0; i < N; i++) {
        // 이전 누적 값 복사
        for (int j = 0; j < 26; j++) {
            prefix[i + 1][j] = prefix[i][j];
        }
        
        prefix[i + 1][S[i] - 'a']++;
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        char c;
        int l, r;
        cin >> c >> l >> r;
        
        int idx = c - 'a';
        
        // 구간 [l, r]에서 특정 문자의 개수 구하기
        cout << prefix[r + 1][idx] - prefix[l][idx] << "\n";
    }
    
    return 0;
}