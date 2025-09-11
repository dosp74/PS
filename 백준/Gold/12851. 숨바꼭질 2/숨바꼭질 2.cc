#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

const int MAX = 100001;
int N, K;

// dist[x] = x까지 도달하는 최소 시간(-1이면 도달 못한 경우)
vector<int> dist(MAX, -1);

pair<int, int> bfs(int start) {
    dist[start] = 0;
    queue<pair<int, int>> q;
    q.push({start, 0});
    
    int minTime = -1;
    int ways = 0;
    
    while (!q.empty()) {
        int cx = q.front().first;
        int cc = q.front().second;
        q.pop();
        
        if (cx == K) {
            if (minTime == -1) {
                minTime = cc;
                ways = 1;
            }
            else if (cc == minTime) {
                ways++;
            }
            
            continue;
        }
        
        int dx[3] = {cx - 1, cx + 1, cx * 2};
        
        for (int nx : dx) {
            if (nx < 0 || nx >= MAX) {
                continue;
            }
            
            if (dist[nx] == -1) {
                dist[nx] = cc + 1;
                q.push({nx, cc + 1});
            }
            else if (dist[nx] == cc + 1) {
                q.push({nx, cc + 1});
            }
        }
    }
    
    return {minTime, ways};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> K;
    
    auto result = bfs(N);
    
    cout << result.first << "\n" << result.second;
    
    return 0;
}