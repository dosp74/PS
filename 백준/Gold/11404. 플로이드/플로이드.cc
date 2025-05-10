#include <iostream>
#include <climits>
using namespace std;

const int INF = INT_MAX;
const int MAX = 100;

void floyd(int n, const int W[MAX][MAX], int D[MAX][MAX]) {
    int i, j, k;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            D[i][j] = INF;
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
                if (D[i][k] != INF && D[k][j] != INF)
                    D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
            }
        }
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
                W[i][j]= INF;
        }
    }
    
    for (int t = 0; t < m; t++) {
        cin >> i >> j >> k;
        i--; j--;
        W[i][j] = min(W[i][j], k);
    }
    
    int D[MAX][MAX];
    
    floyd(n, W, D);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (D[i][j] == INF)
                cout << 0 << " ";
            else
                cout << D[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}