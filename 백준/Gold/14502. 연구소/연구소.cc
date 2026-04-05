#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> board;
bool visited[8][8];
vector<pair<int, int>> wall, virus;
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

void spread(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || nx >= N || ny < 0 || ny >= M || visited[nx][ny]) {
            continue;
        }
        
        if (board[nx][ny] != 1) {
            visited[nx][ny] = true;
            spread(nx, ny);
        }
    }
}

int cal() {
    int cnt = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            visited[i][j] = false;
        }
    }
    
    for (const auto& p : virus) {
        visited[p.first][p.second] = true;
        spread(p.first, p.second);
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == 0 && !visited[i][j]) {
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
    
    board.resize(N, vector<int>(M, 0));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
            
            if (board[i][j] == 0) { // 벽을 세울 수 있는 위치
                wall.push_back({i, j});
            }
            
            if (board[i][j] == 2) {
                virus.push_back({i, j});
            }
        }
    }
    
    int answer = 0;
    
    for (int i = 0; i < wall.size(); i++) {
        for (int j = i + 1; j < wall.size(); j++) {
            for (int k = j + 1; k < wall.size(); k++) {
                board[wall[i].first][wall[i].second] = 1;
                board[wall[j].first][wall[j].second] = 1;
                board[wall[k].first][wall[k].second] = 1;
                answer = max(answer, cal());
                board[wall[i].first][wall[i].second] = 0;
                board[wall[j].first][wall[j].second] = 0;
                board[wall[k].first][wall[k].second] = 0;
            }
        }
    }
    
    cout << answer;
    
    return 0;
}