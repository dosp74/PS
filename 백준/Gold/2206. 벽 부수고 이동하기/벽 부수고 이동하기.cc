#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int N, M;
int graph[MAX][MAX];
bool visited[MAX][MAX][2]; // [x][y][0]은 벽을 아직 안 부순 상태일 때, [x][y][1]은 부순 상태일 때
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

int bfs(int x, int y) {
    visited[x][y][0] = true;
    queue<tuple<int, int, int, int>> q;
    q.push({x, y, 1, 0});
    
    while (!q.empty()) {
        auto [cx, cy, dist, breaking] = q.front();
        q.pop();
        
        if (cx == N - 1 && cy == M - 1) {
            return dist;
        }
        
        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (graph[nx][ny] == 0 && !visited[nx][ny][breaking]) {
                    visited[nx][ny][breaking] = true;
                    q.push({nx, ny, dist + 1, breaking});
                }
                else if (graph[nx][ny] == 1 && breaking == 0 && !visited[nx][ny][1]) {
                    visited[nx][ny][1] = true;
                    q.push({nx, ny, dist + 1, 1});
                }
            }
        }
    }
    
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        
        for (int j = 0; j < M; j++) {
            graph[i][j] = input[j] - '0';
        }
    }
    
    cout << bfs(0, 0);
    
    return 0;
}