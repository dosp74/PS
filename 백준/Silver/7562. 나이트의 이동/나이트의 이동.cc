#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

const int MAX = 300;
bool visited[MAX][MAX];
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2}; // 시계방향
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int l;

void bfs(int startX, int startY, int goalX, int goalY) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            visited[i][j] = false;
        }
    }
    
    visited[startX][startY] = true;
    queue<tuple<int, int, int>> q;
    q.push({startX, startY, 0});
    
    while (!q.empty()) {
        auto [x, y, moves] = q.front();
        q.pop();
        
        if (x == goalX && y == goalY) {
            cout << moves << "\n";
            
            return;
        }
        
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < l && ny >= 0 && ny < l && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny, moves + 1});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        cin >> l;
        
        int startX, goalX, startY, goalY;
        cin >> startX >> startY;
        cin >> goalX >> goalY;
        
        bfs(startX, startY, goalX, goalY);
    }
    
    return 0;
}