#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> info;
vector<pair<int, int>> cctv;
int minValue = INT_MAX;
int dx[4] = {-1, 0, 1, 0}; // 시계 방향
int dy[4] = {0, 1, 0, -1};
vector<vector<vector<int>>> dirs = { // cctv 번호 | 회전 경우의 수 | 방향
    {},
    {{0}, {1}, {2}, {3}},
    {{0, 2}, {1, 3}},
    {{0, 1}, {1, 2}, {2, 3}, {3, 0}},
    {{0, 1, 2}, {1, 2, 3}, {2, 3, 0}, {3, 0, 1}},
    {{0, 1, 2, 3}}
};

void watch(int x, int y, int d, vector<vector<int>>& temp) {
    int nx = x + dx[d];
    int ny = y + dy[d];
    
    while (nx >= 0 && nx < N && ny >= 0 && ny < M) {
        if (temp[nx][ny] == 6) {
            break;
        }
        
        if (temp[nx][ny] == 0) {
            temp[nx][ny] = -1;
        }
        
        nx += dx[d];
        ny += dy[d];
    }
}

void dfs(int i, vector<vector<int>> board) {
    if (i == cctv.size()) {
        int blind = 0;
        
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (board[j][k] == 0) {
                    blind++;
                }
            }
        }
        
        minValue = min(minValue, blind);
        
        return;
    }
    
    int x = cctv[i].first;
    int y = cctv[i].second;
    int type = info[x][y];
    
    for (auto& set : dirs[type]) {
        vector<vector<int>> temp = board;
        
        for (int d : set) {
            watch(x, y, d, temp);
        }
        
        dfs(i + 1, temp);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    info.resize(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> info[i][j];
            
            if (info[i][j] != 0 && info[i][j] != 6) {
                cctv.push_back({i, j});
            }
        }
    }
    
    dfs(0, info);
    
    cout << minValue;
    
    return 0;
}