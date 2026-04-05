#include <bits/stdc++.h>
using namespace std;

int R, C, T;
vector<vector<int>> board;
int calBoard[50][50] = { 0 };
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

struct AirCleaner {
    int x;
    int y;
    int number; // 1이면 위쪽, 2면 아래쪽
};

vector<AirCleaner> cleanerInfo;

// 미세먼지 확산
void spread(int x, int y) {
    int cnt = 0;
    int spreadValue = board[x][y] / 5;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || nx >= R || ny < 0 || ny >= C || board[nx][ny] == -1) {
            continue;
        }
        
        cnt++;
        calBoard[nx][ny] += spreadValue;
    }
    
    calBoard[x][y] += board[x][y] - spreadValue * cnt;
}

// 공기청정기 작동
void clean(int x, int y, int number) { // number가 1이면 위쪽, 2면 아래쪽
    if (number == 1) {
        for (int i = x - 2; i >= 0; i--) {
            board[i + 1][y] = board[i][y];
        }
        
        for (int j = 0; j < C - 1; j++) {
            board[0][j] = board[0][j + 1];
        }
        
        for (int i = 0; i < x; i++) {
            board[i][C - 1] = board[i + 1][C - 1];
        }
        
        for (int j = C - 1; j > 1; j--) {
            board[x][j] = board[x][j - 1];
        }
        
        board[x][y] = -1;
        board[x][y + 1] = 0;
    }
    else { // 아래쪽 공기청정기인 경우
        for (int i = x + 1; i < R - 1; i++) {
            board[i][y] = board[i + 1][y];
        }
        
        for (int j = 0; j < C - 1; j++) {
            board[R - 1][j] = board[R - 1][j + 1];
        }
        
        for (int i = R - 2; i >= x; i--) {
            board[i + 1][C - 1] = board[i][C - 1];
        }
        
        for (int j = C - 1; j > 1; j--) {
            board[x][j] = board[x][j - 1];
        }
        
        board[x][y] = -1;
        board[x][y + 1] = 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> R >> C >> T;
    
    board.resize(R, vector<int>(C));
    
    int checkVar = 1; // cleanerInfo 만든 후 안 씀
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> board[i][j];
            
            if (board[i][j] == -1) {
                cleanerInfo.push_back({i, j, checkVar++});
            }
        }
    }
    
    // T초 동안 진행
    while (T--) {
        // 1. 미세먼지 확산(계산)
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (board[i][j] != -1 && board[i][j] != 0) {
                    spread(i, j);
                }
            }
        }
        
        // 적용
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (board[i][j] == -1) {
                    continue;
                }
                
                board[i][j] = calBoard[i][j];
            }
        }
        
        // 계산용 격자판 초기화
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                calBoard[i][j] = 0;
            }
        }
        
        
        // 2. 공기청정기 작동
        for (const auto& a : cleanerInfo) {
            clean(a.x, a.y, a.number);
        }
    }
    
    // 미세먼지 양 계산 및 출력
    int answer = 0;
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            answer += board[i][j];
        }
    }
    
    cout << answer + 2;
    
    return 0;
}