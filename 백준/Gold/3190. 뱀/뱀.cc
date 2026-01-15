#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<vector<int>> board(N, vector<int>(N, 0));
    
    int K;
    cin >> K;
    for (int i = 0; i < K; i++) {
        int x, y;
        cin >> x >> y;
        board[x - 1][y - 1] = 2; // 2는 사과를 의미
    }
    
    int L;
    cin >> L;
    queue<pair<int, char>> commands;
    for (int i = 0; i < L; i++) {
        int X;
        char C;
        cin >> X >> C;
        commands.push({X, C});
    }
    
    int cnt = 0;
    int dx[4] = {0, 1, 0, -1}; // 시계 방향
    int dy[4] = {1, 0, -1, 0};
    int rotateInfo = 0;
    
    queue<pair<int, int>> q;
    q.push({0, 0});
    board[0][0] = 1; // 1은 뱀을 의미
    
    deque<pair<int, int>> snakeInfo; // 뱀이 위치해 있는 좌표들
    snakeInfo.push_back({0, 0});
    
    while (!q.empty()) {
        cnt++;
        
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        
        int nx = cx + dx[rotateInfo];
        int ny = cy + dy[rotateInfo];
        
        if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
            break;
        }
        
        if (board[nx][ny] == 1) {
            break;
        }
        
        if (board[nx][ny] == 0) {
            board[nx][ny] = 1;
            q.push({nx, ny});
            
            snakeInfo.push_front({nx, ny});
            int tailX = snakeInfo.back().first;
            int tailY = snakeInfo.back().second;
            board[tailX][tailY] = 0;
            snakeInfo.pop_back();
        }
        
        if (board[nx][ny] == 2) {
            board[nx][ny] = 1;
            q.push({nx, ny});
            snakeInfo.push_front({nx, ny});
        }
        
        int eventTime;
        int eventAction;
        
        if (!commands.empty()) {
            eventTime = commands.front().first;
            eventAction = commands.front().second;
        }
        
        if (!commands.empty() && cnt == eventTime) {
            commands.pop();
            
            if (eventAction == 'L') {
                rotateInfo--;
                
                if (rotateInfo < 0) {
                    rotateInfo = 3;
                }
            }
            else if (eventAction == 'D') {
                rotateInfo++;
                
                if (rotateInfo > 3) {
                    rotateInfo = 0;
                }
            }
        }
    }
    
    cout << cnt;
    
    return 0;
}