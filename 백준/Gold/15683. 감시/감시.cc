#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> board;
int dx[4] = {-1, 0, 1, 0}; // 상우하좌 (0: 상, 1: 우, 2: 하, 3: 좌)
int dy[4] = {0, 1, 0, -1};
int minValue = INT_MAX;

struct Cctv {
    int x;
    int y;
    int type;
};
vector<Cctv> cctvs;

int rotateCount(int type) {
    if (type == 2) return 2;
    if (type == 5) return 1;
    return 4;
}

vector<int> getDirs(int type, int d) {
    if (type == 1) return { d };
    if (type == 2) return {d, (d + 2) % 4};
    if (type == 3) return {d, (d + 1) % 4};
    if (type == 4) return {d, (d + 1) % 4, (d + 2) % 4};
    return {0, 1, 2, 3};
}

void dfs(int idx, vector<vector<int>> temp) {
    if (idx == cctvs.size()) {
        int cnt = 0;
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (temp[i][j] == 0) {
                    cnt++;
                }
            }
        }
        
        minValue = min(minValue, cnt);
        
        return;
    }
    
    int cx = cctvs[idx].x;
    int cy = cctvs[idx].y;
    int ct = cctvs[idx].type;
    
    for (int d = 0; d < rotateCount(ct); d++) {
        vector<vector<int>> nextBoard = temp;
        vector<int> dirs = getDirs(ct, d);
        
        for (int nd = 0; nd < dirs.size(); nd++) {
            int dir = dirs[nd];
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            
            while (nx >= 0 && nx < N && ny >= 0 && ny < M && nextBoard[nx][ny] != 6) {
                if (nextBoard[nx][ny] == 0) {
                    nextBoard[nx][ny] = -1; // 감시
                }
                
                nx += dx[dir];
                ny += dy[dir];
            }
        }
        
        dfs(idx + 1, nextBoard);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    board.resize(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
            
            if (board[i][j] != 0 && board[i][j] != 6) {
                cctvs.push_back({i, j, board[i][j]});
            }
        }
    }
    
    dfs(0, board);
    
    cout << minValue;
    
    return 0;
}