#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> arr(N + 1, vector<int>(M + 1));
    vector<vector<int>> prefixSum(N + 1, vector<int>(M + 1));
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> arr[i][j];
            prefixSum[i][j] = prefixSum[i - 1][j]
                            + prefixSum[i][j - 1]
                            - prefixSum[i - 1][j - 1]
                            + arr[i][j];
        }
    }
    
    int K;
    cin >> K;
    
    for (int t = 0; t < K; t++) {
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        
        int result = prefixSum[x][y]
                   - prefixSum[x][j - 1]
                   - prefixSum[i - 1][y]
                   + prefixSum[i - 1][j - 1];
        
        cout << result << "\n";
    }
    
    return 0;
}