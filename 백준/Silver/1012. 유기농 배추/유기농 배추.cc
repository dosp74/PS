#include <iostream>
#include <queue>
#include <utility>
using namespace std;

const int MAX = 50;
int cnt = 0;
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

void bfs(int x, int y, int M, int N, int graph[][MAX], bool visited[][MAX]) {
    visited[y][x] = true;
    queue<pair<int, int>> q;
    q.push({x, y});
    
    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if (nx >= 0 && nx <= M - 1 && ny >= 0 && ny <= N - 1) {
                if (graph[ny][nx] == 1 && !visited[ny][nx]) {
                    visited[ny][nx] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
    
    cnt++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int M; // 배추밭의 가로 길이(1 <= M <= 50)
        cin >> M;
        
        int N; // 배추밭의 세로 길이(1 <= N <= 50)
        cin >> N;
        
        int K; // 배추가 심어져 있는 위치의 개수 (1 <= K <= 2500)
        cin >> K;
        
        int graph[MAX][MAX] = { 0 };
        bool visited[MAX][MAX] = { false };
        
        for (int t = 0; t < K; t++) {
            int i, j;
            cin >> i >> j;
            graph[j][i] = 1;
        }
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (graph[i][j] == 1 && !visited[i][j]) {
                    bfs(j, i, M, N, graph, visited);
                }
            }
        }
        
        cout << cnt << "\n";
        
        cnt = 0;
    }
    
    return 0;
}