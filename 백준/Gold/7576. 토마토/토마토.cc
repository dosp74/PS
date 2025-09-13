#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

const int MAX = 1001;
int tomato[MAX][MAX];
bool visited[MAX][MAX];
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};
int M, N; // M은 상자의 가로 칸의 수, N은 상자의 세로 칸의 수
int cnt = 0;

int bfs() {
    queue<tuple<int, int, int>> q;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tomato[i][j] == 1) {
                q.push({i, j, 0});
            }
        }
    }
    
    while (!q.empty()) {
        int x, y, cc;
        tie(x, y, cc) = q.front();
        q.pop();
        visited[x][y] = true;
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny]) {
                if (tomato[nx][ny] == 0) {
                    tomato[nx][ny] = 1;
                    visited[nx][ny] = true;
                    q.push({nx, ny, cc + 1});
                    
                    if (cnt < cc + 1) {
                        cnt = cc + 1;
                    }
                    
                    continue;
                }
                
                if (tomato[nx][ny] == -1) {
                    if (cc > cnt) {
                        cnt = cc;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tomato[i][j] == 0 && !visited[i][j]) {
                return -1;
            }
        }
    }
    
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> M >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> tomato[i][j];
        }
    }
    
    cout << bfs();
    
    return 0;
}