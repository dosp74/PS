#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int N, M;
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

int bfs(int x, int y, vector<vector<int>> graph) {
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    visited[x][y] = true;
    queue<pair<int, int>> q;
    q.push({x, y});
    queue<int> distance;
    distance.push(1);
    
    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        int cd = distance.front();
        q.pop();
        distance.pop();
        
        if (cx == N - 1 && cy == M - 1) {
            return cd;
        }
        
        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (graph[nx][ny] == 1 && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                    distance.push(cd + 1);
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> M;
    
    vector<vector<int>> graph(N, vector<int>(M, 0));
    
    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        
        for (int j = 0; j < M; j++) {
            graph[i][j] = row[j] - '0';
        }
    }
    
    cout << bfs(0, 0, graph);
    
    return 0;
}