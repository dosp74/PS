#include <bits/stdc++.h>
using namespace std;

const int MAX = 601;
char graph[MAX][MAX];
bool visited[MAX][MAX];
int dx[4] = {0, 0, -1, 1}; // 좌우상하
int dy[4] = {-1, 1, 0, 0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    pair<int, int> doyeon;
    
    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        
        for (int j = 0; j < M; j++) {
            graph[i][j] = input[j];
            
            if (input[j] == 'I') {
                doyeon = {i, j};
            }
        }
    }
    
    queue<pair<int, int>> q;
    q.push(doyeon);
    visited[doyeon.first][doyeon.second] = true;
    
    int count = 0;
    
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && graph[nx][ny] != 'X') {
                visited[nx][ny] = true;
                q.push({nx, ny});
                
                if (graph[nx][ny] == 'P') {
                    count++;
                }
            }
        }
    }
    
    if (count == 0) {
        cout << "TT";
    }
    else {
        cout << count;
    }
    
    return 0;
}