#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 100001;
vector<bool> visited(MAX, false);
int dx[2] = {-1, 1};
int N, K;

int bfs(int start) {
    visited[start] = true;
    queue<int> q;
    q.push(start);
    queue<int> count;
    count.push(0);
    
    while (!q.empty()) {
        int cx = q.front();
        q.pop();
        int cc = count.front();
        count.pop();
        
        if (cx == K) {
            return cc;
        }
        
        for (int i = 0; i < 2; i++) {
            int nx = cx + dx[i];
            
            if (nx >= 0 && nx <= MAX - 1) {
                if (!visited[nx]) {
                    visited[nx] = true;
                    q.push(nx);
                    count.push(cc + 1);
                }
            }
        }
        
        int nx = cx * 2;
        
        if (nx >= 0 && nx <= MAX - 1) {
            if (!visited[nx]) {
                visited[nx] = true;
                q.push(nx);
                count.push(cc + 1);
            }
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