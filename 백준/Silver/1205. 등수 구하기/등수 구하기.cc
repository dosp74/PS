#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, score, P;
    cin >> N >> score >> P;
    
    vector<int> rank(N);
    for (int i = 0; i < N; i++) {
        cin >> rank[i];
    }
    
    if (N == P && score <= rank[N - 1]) {
        cout << -1;
        
        return 0;
    }
    
    int result = 1;
    for (int i = 0; i < N; i++) {
        if (score < rank[i]) {
            result++;
        }
        else {
            break;
        }
    }
    
    cout << result;
    
    return 0;
}