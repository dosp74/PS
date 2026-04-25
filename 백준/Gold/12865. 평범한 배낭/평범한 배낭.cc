#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    vector<int> W(N + 1);
    vector<int> V(N + 1);
    
    for (int i = 1; i <= N; i++) {
        cin >> W[i] >> V[i];
    }
    
    // P[i][w]: i번째 물건까지 고려했을 때 무게 w 이하로 얻을 수 있는 최대 가치
    vector<vector<int>> P(N + 1, vector<int>(K + 1, 0));
    
    for (int i = 1; i <= N; i++) {
        for (int w = 0; w <= K; w++) {
            if (W[i] > w) {
                // i번째 물건을 넣을 수 없는 경우
                P[i][w] = P[i - 1][w];
            }
            else {
                // 넣는 경우와 넣지 않는 경우
                P[i][w] = max(P[i - 1][w], V[i] + P[i - 1][w - W[i]]);
            }
        }
    }
    
    cout << P[N][K];
    
    return 0;
}