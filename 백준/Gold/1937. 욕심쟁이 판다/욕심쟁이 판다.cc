#include <bits/stdc++.h>
using namespace std;

int n;
int forest[500][500];
int dp[500][500];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int dfs(int x, int y) {
    if (dp[x][y] != 0) {
        return dp[x][y];
    }
    
    dp[x][y] = 1;
    
    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];
        
        if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
            continue;
        }
        
        if (forest[nx][ny] > forest[x][y]) {
            dp[x][y] = max(dp[x][y], 1 + dfs(nx, ny));
        }
    }
    
    return dp[x][y];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> forest[i][j];
        }
    }
    
    int answer = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            answer = max(answer, dfs(i, j));
        }
    }
    
    cout << answer;
    
    return 0;
}