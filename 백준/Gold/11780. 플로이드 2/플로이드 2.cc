#include <iostream>
#include <climits>
#include <vector>
using namespace std;

const int INF = INT_MAX;
const int MAX = 100;

void floydPath(int n, const int W[MAX][MAX], int D[MAX][MAX], int P[MAX][MAX]) {
    int i, j, k;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            D[i][j] = INF;
            P[i][j] = -1;
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (W[i][j] != INF)
                D[i][j] = W[i][j];
        }
    }
    
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (D[i][k] != INF && D[k][j] != INF) {
                    if (D[i][j] > D[i][k] + D[k][j]) {
                        D[i][j] = D[i][k] + D[k][j];
                        P[i][j] = k;
                    }
                }
            }
        }
    }
}

void getPath(const int P[MAX][MAX], int q, int r, vector<int>& result) {
    if (P[q][r] != -1) {
        getPath(P, q, P[q][r], result);
        result.push_back(P[q][r]);
        getPath(P, P[q][r], r, result);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    int W[MAX][MAX];
    
    int i, j, k;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)
                W[i][j] = 0;
            else
                W[i][j] = INF;
        }
    }
    
    for (int t = 0; t < m; t++) {
        cin >> i >> j >> k;
        i--; j--;
        W[i][j] = min(W[i][j], k);
    }
    
    int D[MAX][MAX];
    int P[MAX][MAX];
    
    floydPath(n, W, D, P);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (D[i][j] == INF)
                cout << 0 << " ";
            else
                cout << D[i][j] << " ";
        }
        cout << "\n";
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (D[i][j] == INF || i == j)
                cout << 0 << "\n";
            else {
                vector<int> result;
                result.push_back(i);
                getPath(P, i, j, result);
                result.push_back(j);
                
                cout << result.size() << " ";
                
                for (int t = 0; t < result.size(); t++)
                    cout << result[t] + 1 << " ";
                
                cout << "\n";
            }
        }
    }
    
    return 0;
}