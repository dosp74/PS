#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<vector<int>> graph(N + 1); // 인접 리스트
    vector<int> parent(N + 1);
    vector<bool> visited(N + 1, false);
    
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    queue<int> q;
    q.push(1);
    visited[1] = true;
    
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        
        for (int next : graph[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                parent[next] = cur;
                q.push(next);
            }
        }
    }
    
    for (int i = 2; i <= N; i++) {
        cout << parent[i] << "\n";
    }
    
    return 0;
}