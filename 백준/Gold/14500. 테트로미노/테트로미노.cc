#include <bits/stdc++.h>
using namespace std;

int N, M;
int board[500][500];
bool visited[500][500];
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};
int answer = 0;

void dfs(int x, int y, int depth, int sum) {
    if (depth == 4) {
        answer = max(answer, sum);
        
        return;
    }
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
            continue;
        }
        
        if (visited[nx][ny]) {
            continue;
        }
        
        visited[nx][ny] = true;
        dfs(nx, ny, depth + 1, sum + board[nx][ny]);
        visited[nx][ny] = false;
    }
}

void checkT(int x, int y) { // dfs로 만들 수 없는 모양(ㅜ) 체크
    for (int i = 0; i < 4; i++) { // ㅜ 중심에서 시작하여 좌우상하 중 3개만 선택
        int sum = board[x][y];
        bool isValid = true;
        
        for (int j = 0; j < 4; j++) {
            if (j == i) {
                continue;
            }
            
            int nx = x + dx[j];
            int ny = y + dy[j];
            
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
                isValid = false;
                
                break;
            }
            
            sum += board[nx][ny];
        }
        
        if (isValid) {
            answer = max(answer, sum);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            visited[i][j] = true;
            dfs(i, j, 1, board[i][j]);
            visited[i][j] = false;
            checkT(i, j);
        }
    }
    
    cout << answer;
    
    return 0;
}