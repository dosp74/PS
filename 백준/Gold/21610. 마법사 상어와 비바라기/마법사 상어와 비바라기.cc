#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> board;
int dx[9] = {0, 0, -1, -1, -1, 0, 1, 1, 1}; // 0 인덱스는 무시
int dy[9] = {0, -1, -1, 0, 1, 1, 1, 0, -1};

// 이동 명령
struct command {
    int d; // 방향
    int s; // 거리
};

vector<command> commands;
vector<pair<int, int>> rainClouds;
vector<pair<int, int>> newRainClouds;

void move(int d, int s) {
    for (auto& r : rainClouds) {
        int nx = (r.first + dx[d] * s % N + N) % N;
        int ny = (r.second + dy[d] * s % N + N) % N;
        newRainClouds.push_back({nx, ny});
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M;
    cin >> N >> M;
    
    board.resize(N, vector<int>(N));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }
    
    for (int i = 0; i < M; i++) {
        int di; int si;
        cin >> di >> si;
        commands.push_back({di, si});
    }
    
    // 비바라기 시전
    rainClouds.push_back({N - 1, 0});
    rainClouds.push_back({N - 1, 1});
    rainClouds.push_back({N - 2, 0});
    rainClouds.push_back({N - 2, 1});
    
    int cnt = 0;
    
    while (M--) {
        // 1. 구름 이동
        auto& c = commands[cnt];
        move(c.d, c.s);
        
        // 2. 구름에서 비가 내림
        for (auto& p : newRainClouds) {
            board[p.first][p.second]++;
        }
        
        // 3. 구름이 모두 사라짐
        vector<pair<int, int>> checkRainCloudsList = newRainClouds;
        newRainClouds.clear();
        
        // 4. 물이 증가한 칸에 물복사버그 마법 시전
        for (auto& p : checkRainCloudsList) {
            int cx = p.first;
            int cy = p.second;
            
            for (int i = 2; i <= 8; i += 2) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                
                if (nx < 0 || nx >= N || ny < 0 || ny >= N || board[nx][ny] == 0) {
                    continue;
                }
                
                board[cx][cy]++;
            }
        }
        
        // 5. 물의 양이 2 이상인 모든 칸에 구름이 생김
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                bool pass = false;
                
                for (auto& p : checkRainCloudsList) {
                    if (i == p.first && j == p.second) {
                        pass = true;
                        
                        break;
                    }
                }
                
                if (pass) {
                    continue;
                }
                
                if (board[i][j] >= 2) {
                    newRainClouds.push_back({i, j});
                    board[i][j] -= 2;
                }
            }
        }
        
        rainClouds = newRainClouds;
        newRainClouds.clear();
        
        cnt++;
    }
    
    // 바구니에 들어있는 물의 양의 합 출력
    int answer = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            answer += board[i][j];
        }
    }
    
    cout << answer;
    
    return 0;
}