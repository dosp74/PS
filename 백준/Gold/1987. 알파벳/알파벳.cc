#include <bits/stdc++.h>
using namespace std;

int R, C;
vector<string> board;
bool used[26]; // 알파벳
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};
int answer = 0;

void dfs(int x, int y, int cnt) {
    answer = max(answer, cnt);
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
            continue;
        }
        
        int idx = board[nx][ny] - 'A';
        
        if (used[idx]) {
            continue;
        }
        
        used[idx] = true;
        dfs(nx, ny, cnt + 1);
        used[idx] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> R >> C;
    board.resize(R);
    for (int i = 0; i < R; i++) {
        cin >> board[i];
    }
    
    used[board[0][0] - 'A'] = true;
    dfs(0, 0, 1);
    
    cout << answer;
    
    return 0;
}