#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    
    int M2, K;
    cin >> M2 >> K;
    
    vector<vector<int>> B(M2, vector<int>(K));
    for (int i = 0; i < M2; i++) {
        for (int j = 0; j < K; j++) {
            cin >> B[i][j];
        }
    }
    
    vector<vector<int>> C(N, vector<int>(K, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            for (int t = 0; t < M; t++) {
                C[i][j] += A[i][t] * B[t][j];
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cout << C[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}