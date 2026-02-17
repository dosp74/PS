#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> piles(M);
    vector<int> where(N + 1); // 책 번호 -> 어느 더미인지
    
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        piles[i].resize(k);
        
        for (int j = 0; j < k; j++) {
            cin >> piles[i][j];
            where[piles[i][j]] = i;
        }
    }
    
    for (int num = 1; num <= N; num++) {
        int pileIdx = where[num];
        
        if (piles[pileIdx].empty() || piles[pileIdx].back() != num) {
            cout << "No";
            
            return 0;
        }
        
        piles[pileIdx].pop_back();
    }
    
    cout << "Yes";
    
    return 0;
}