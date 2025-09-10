#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

const int MAX = 100001;
vector<bool> visited(MAX, false);
int dx[2] = {-1, 1};
int N, K;

int bfs(int start) {
    visited[start] = true;
    queue<pair<int, int>> q;
    q.push({start, 0});
    
    while (!q.empty()) {
        int cx = q.front().first;
        int cc = q.front().second;
        q.pop();
        
        if (cx == K) {
            return cc;
        }
        
        for (int i = 0; i < 2; i++) {
            int nx = cx + dx[i];
            
            if (nx >= 0 && nx < MAX && !visited[nx]) {
                visited[nx] = true;
                q.push({nx, cc + 1});
            }
        }
        
        int nx = cx * 2;
        
        if (nx >= 0 && nx < MAX && !visited[nx]) {
            visited[nx] = true;
            q.push({nx, cc + 1});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> K;
    
    cout << bfs(N);
    
    return 0;
}