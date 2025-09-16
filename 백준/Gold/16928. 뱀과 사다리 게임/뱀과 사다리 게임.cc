#include <bits/stdc++.h>
using namespace std;

int radder_and_snake[101];
bool visited[101];

int bfs(int start) {
    visited[start] = true;
    queue<pair<int, int>> q;
    q.push({start, 0});
    
    while (!q.empty()) {
        int location = q.front().first;
        int cc = q.front().second;
        q.pop();
        
        if (location == 100) {
            return cc;
        }
        
        for (int i = 1; i <= 6; i++) {
            int next_location = location + i;
            
            if (next_location <= 100 && !visited[next_location]) {
                visited[next_location] = true;
                
                if (radder_and_snake[next_location] != 0) {
                    q.push({radder_and_snake[next_location], cc + 1});
                }
                else {
                    q.push({next_location, cc + 1});
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M; // N은 사다리의 수, M은 뱀의 수
    cin >> N >> M;
    
    for (int i = 0; i < N + M; i++) {
        int x, y;
        cin >> x >> y;
        radder_and_snake[x] = y;
    }
    
    cout << bfs(1);
    
    return 0;
}