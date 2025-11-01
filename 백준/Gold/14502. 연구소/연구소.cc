#include <bits/stdc++.h>
using namespace std;

int N, M;
int graph[8][8];
bool visited[8][8];
vector<pair<int, int>> wall, virus;
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || nx >= N || ny < 0 || ny >= M || visited[nx][ny] || graph[nx][ny] == 1) {
            continue;
        }
        
        visited[nx][ny] = true;
        dfs(nx, ny);
    }
}

int cal() {
    int cnt = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            visited[i][j] = false;
        }
    }
    
    for (pair<int, int> vir : virus) {
        visited[vir.first][vir.second] = true;
        dfs(vir.first, vir.second);
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (graph[i][j] == 0 && !visited[i][j]) {
                cnt++;
            }
        }
    }
    
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> graph[i][j];
            
            if (graph[i][j] == 0) { // 벽을 세울 수 있는 좌표이면
                wall.push_back({i, j});
            }
            
            if (graph[i][j] == 2) {
                virus.push_back({i, j});
            }
        }
    }
    
    int maxSafeArea = 0;
    
    for (int k = 0; k < wall.size(); k++) { // 벽을 세울 수 있는 모든 좌표에 대해
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < i; j++) {
                graph[wall[k].first][wall[k].second] = 1;
                graph[wall[i].first][wall[i].second] = 1;
                graph[wall[j].first][wall[j].second] = 1;
                
                maxSafeArea = max(maxSafeArea, cal());
                
                graph[wall[k].first][wall[k].second] = 0;
                graph[wall[i].first][wall[i].second] = 0;
                graph[wall[j].first][wall[j].second] = 0;
            }
        }
    }
    
    cout << maxSafeArea;
    
    return 0;
}