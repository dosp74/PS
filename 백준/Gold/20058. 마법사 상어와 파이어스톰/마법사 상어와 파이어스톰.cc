#include <bits/stdc++.h>
using namespace std;

int N, Q;
vector<vector<int>> A;
bool visited[64][64] = { false };
int dx[4] = {-1, 0, 1, 0}; // 상우하좌
int dy[4] = {0, 1, 0, -1};

void rotate(int x, int y, int size, vector<vector<int>>& temp) {
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            temp[x + (j - y)][y + (size - 1 - (i - x))] = A[i][j];
        }
    }
}

void calBfs(int x, int y, vector<vector<int>>& temp) {
    int cnt = 0;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || nx >= A.size() || ny < 0 || ny >= A.size()) {
            continue;
        }
        
        if (A[nx][ny] != 0) {
            cnt++;
        }
    }
    
    // 계산은 A로, 적용은 temp로
    if (cnt < 3) {
        temp[x][y]--;
    }
}

void fireStorm(int L) {
    int size = pow(2, L);
    vector<vector<int>> temp = A;
    
    // 모든 부분 격자 시계 방향 회전(90도)
    for (int i = 0; i < A.size(); i += size) {
        for (int j = 0; j < A.size(); j += size) {
            rotate(i, j, size, temp);
        }
    }
    
    A = temp;
    
    // 얼음이 있는 칸 3, 4개와 인접해있지 않은 칸의 얼음 양 1 줄이기
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A.size(); j++) {
            if (A[i][j] != 0) {
                calBfs(i, j, temp);
            }
        }
    }
    
    A = temp;
}

int bfs(int x, int y, int cnt) {
    queue<pair<int, int>> q;
    visited[x][y] = true;
    cnt++;
    q.push({x, y});
    
    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if (nx < 0 || nx >= A.size() || ny < 0 || ny >= A.size() || visited[nx][ny] || A[nx][ny] == 0) {
                continue;
            }
            
            visited[nx][ny] = true;
            cnt++;
            q.push({nx, ny});
        }
    }
    
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> Q;
    int size = pow(2, N);
    A.resize(size, vector<int>(size));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> A[i][j];
        }
    }
    
    vector<int> levels;
    for (int i = 0; i < Q; i++) {
        int l;
        cin >> l;
        levels.push_back(l);
    }
    
    for (int l : levels) {
        fireStorm(l);
    }
    
    // 출력
    long long sum = 0;
    int cnt = 0;
    
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A.size(); j++) {
            sum += A[i][j];
            
            if (!visited[i][j] && A[i][j] != 0) {
                cnt = max(cnt, bfs(i, j, 0));
            }
        }
    }
    
    cout << sum << "\n" << cnt;
    
    return 0;
}