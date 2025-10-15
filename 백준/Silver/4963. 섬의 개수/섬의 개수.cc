#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int w, h;
    cin >> w >> h;
    
    while (!(w == 0 && h == 0)) {
        int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1}; // 시계방향
        int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
        
        vector<vector<int>> graph(h, vector<int>(w, 0));
        bool visited[50][50];
        int count = 0;
        
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> graph[i][j];
                visited[i][j] = false;
            }
        }
        
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (graph[i][j] == 1 && !visited[i][j]) {
                    count++;
                    visited[i][j] = true;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    
                    while(!q.empty()) {
                        auto [x, y] = q.front();
                        q.pop();
                        
                        for (int i = 0; i < 8; i++) {
                            int nx = x + dx[i];
                            int ny = y + dy[i];
                            
                            if (nx >= 0 && nx < h && ny >= 0 && ny < w) {
                                if (graph[nx][ny] == 1 && !visited[nx][ny]) {
                                    visited[nx][ny] = true;
                                    q.push({nx, ny});
                                }
                            }
                        }
                    }
                }
            }
        }
        
        cout << count << "\n";
        cin >> w >> h;
    }
    
    return 0;
}