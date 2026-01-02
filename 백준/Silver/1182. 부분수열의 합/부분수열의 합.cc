#include <bits/stdc++.h>
using namespace std;

int N, S;
vector<int> sequence;
int cnt = 0;

void solve(int i, int sum) {
    if (i == N) {
        if (sum == S) {
            cnt++;
        }
        
        return;
    }
    
    solve(i + 1, sum);
    solve(i + 1, sum + sequence[i]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> S;
    sequence.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }
    
    solve(0, 0);
    
    if (S == 0) { // 공집합
        cnt--;
    }
    
    cout << cnt;
    
    return 0;
}