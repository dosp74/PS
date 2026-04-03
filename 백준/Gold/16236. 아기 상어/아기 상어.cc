#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> board;
bool visited[20][20];
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

struct FishInfo {
    int x;
    int y;
    int dist;
};

vector<FishInfo> fishes;

// 먹을 수 있는 물고기 찾기
FishInfo bfs(int x, int y, int size) {
    queue<FishInfo> q;
    visited[x][y] = true;
    q.push({x, y, 0});
    
    int minValue = INT_MAX;
    
    while (!q.empty()) {
        int cx = q.front().x;
        int cy = q.front().y;
        int cc = q.front().dist;
        
        if (minValue < cc + 1) {
            break;
        }
        
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            int nc = cc + 1;
            
            if (nx < 0 || nx >= N || ny < 0 || ny >= N || visited[nx][ny]) {
                continue;
            }
            
            if (size < board[nx][ny]) {
                continue;
            }
            
            if (board[nx][ny] == 0 || size == board[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny, nc});
            }
            else { // 먹을 수 있는 물고기인 경우
                visited[nx][ny] = true;
                q.push({nx, ny, nc});
                fishes.push_back({nx, ny, nc});
                minValue = nc;
            }
        }
    }
    
    if (fishes.empty()) {
        FishInfo result = {-1, -1, -1};
        
        return result;
    }
    
    sort(fishes.begin(), fishes.end(), [](FishInfo a, FishInfo b) {
        if (a.x == b.x) {
            return a.y < b.y;
        }
        
        return a.x < b.x;
    });
    
    return fishes.front();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    board.resize(N, vector<int>(N));
    
    int sharkX, sharkY;
    int sharkSize = 2;
    int eatCnt = 0;
    int answer = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
            
            if (board[i][j] == 9) {
                sharkX = i;
                sharkY = j;
                board[i][j] = 0;
            }
        }
    }
    
    while (true) {
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 20; j++) {
                visited[i][j] = false;
            }
        }
        
        fishes.clear();
        
        FishInfo target = bfs(sharkX, sharkY, sharkSize);
        
        if (target.dist == -1) {
            cout << answer;
            
            return 0;
        }
        
        board[target.x][target.y] = 0;
        sharkX = target.x;
        sharkY = target.y;
        eatCnt++;
        
        if (eatCnt == sharkSize) {
            sharkSize++;
            eatCnt = 0;
        }
        
        answer += target.dist;
    }
    
    return 0;
}