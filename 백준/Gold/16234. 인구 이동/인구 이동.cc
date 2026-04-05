#include <bits/stdc++.h>
using namespace std;

int N, L, R;
vector<vector<int>> A;
bool visited[50][50];
vector<pair<int, int>> unions;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int sum = 0;

bool bfs(int x, int y) {
    queue<pair<int, int>> q;
    visited[x][y] = true;
    q.push({x, y});
    unions.push_back({x, y});
    
    sum = A[x][y];
    
    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if (nx < 0 || nx >= N || ny < 0 || ny >= N || visited[nx][ny]) {
                continue;
            }
            
            // 인구 차이 계산
            int diff = abs(A[cx][cy] - A[nx][ny]);
            
            if (diff >= L && diff <= R) {
                sum += A[nx][ny];
                visited[nx][ny] = true;
                q.push({nx, ny});
                unions.push_back({nx, ny});
            }
        }
    }
    
    if (unions.size() >= 2) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> L >> R;
    
    A.resize(N, vector<int>(N));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    int cnt = 0;
    
    while (true) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                visited[i][j] = false;
            }
        }
        
        // 인구 차이 계산
        bool dayMoved = false;
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (!visited[i][j]) {
                    bool moved = bfs(i, j);
                    
                    if (moved) {
                        int avg = sum / unions.size();
                        
                        for (auto& v : unions) {
                            A[v.first][v.second] = avg;
                        }
                        
                        dayMoved = true;
                    }
                    
                    sum = 0;
                    unions.clear();
                }
            }
        }
        
        if (dayMoved) {
            cnt++;
        }
        else {
            break;
        }
    }
    
    cout << cnt;
    
    return 0;
}