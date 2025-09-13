#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
int tomato[MAX][MAX];
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};
int M, N; // M은 상자의 가로 칸의 수, N은 상자의 세로 칸의 수

int bfs() {
    queue<tuple<int, int, int>> q;
    int days = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tomato[i][j] == 1) {
                q.push({i, j, 0});
            }
        }
    }
    
    while (!q.empty()) {
        auto [x, y, d] = q.front();
        q.pop();
        days = max(days, d);
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (tomato[nx][ny] == 0) {
                    tomato[nx][ny] = 1;
                    q.push({nx, ny, d + 1});
                }
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tomato[i][j] == 0) {
                return -1;
            }
        }
    }
    
    return days;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> M >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> tomato[i][j];
        }
    }
    
    cout << bfs();
    
    return 0;
}