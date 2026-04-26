#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K;
    cin >> K;
    
    while (K--) {
        int V, E;
        cin >> V >> E;
        
        vector<vector<int>> graph(V + 1);
        
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        // 0: 아직 방문 안 함
        // 1: 첫 번째 색
        // -1: 두 번째 색
        vector<int> color(V + 1, 0);
        
        bool isBipartite = true;
        
        for (int start = 1; start <= V; start++) {
            if (color[start] != 0) {
                continue;
            }
            
            queue<int> q;
            q.push(start);
            color[start] = 1;
            
            while (!q.empty() && isBipartite) {
                int cur = q.front();
                q.pop();
                
                for (int next : graph[cur]) {
                    if (color[next] == 0) {
                        color[next] = -color[cur];
                        q.push(next);
                    }
                    else if (color[next] == color[cur]) {
                        isBipartite = false;
                        
                        break;
                    }
                }
            }
            
            if (!isBipartite) {
                break;
            }
        }
        
        cout << (isBipartite ? "YES" : "NO") << "\n";
    }
    
    return 0;
}