#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    // 1-based indexing
    vector<int> arr(N + 1, 0);
    vector<int> prefix(N + 1, 0);
    
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }
    
    for (int t = 0; t < M; t++) {
        int i, j;
        cin >> i >> j;
        cout << prefix[j] - prefix[i - 1] << "\n";
    }
    
    return 0;
}