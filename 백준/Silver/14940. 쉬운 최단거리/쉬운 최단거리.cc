#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
int n, m;
int graph[MAX][MAX];
int dist[MAX][MAX];
bool visited[MAX][MAX];
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    
    pair<int, int> goal;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
            dist[i][j] = -1;
            
            if (graph[i][j] == 2) {
                goal = {i, j};
            }
        }
    }
    
    queue<pair<int, int>> q;
    visited[goal.first][goal.second] = true;
    dist[goal.first][goal.second] = 0;
    q.push(goal);
    
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && graph[nx][ny] == 1) {
                visited[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (graph[i][j] == 0) {
                cout << 0 << " ";
                
                continue;
            }
            
            cout << dist[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}