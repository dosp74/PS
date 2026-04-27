#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> graph;
vector<bool> visited;

bool isTree;

void dfs(int cur, int parent) {
    visited[cur] = true;
    
    for (int next : graph[cur]) {
        if (next == parent) {
            continue;
        }
        
        if (visited[next]) {
            isTree = false;
            
            continue;
        }
        
        dfs(next, cur);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int caseNumber = 1;
    
    while (true) {
        cin >> n >> m;
        
        if (n == 0 && m == 0) {
            break;
        }
        
        graph.assign(n + 1, vector<int>());
        visited.assign(n + 1, false);
        
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        
        int cnt = 0;
        
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                isTree = true;
                
                dfs(i, 0);
                
                if (isTree) {
                    cnt++;
                }
            }
        }
        
        cout << "Case " << caseNumber << ": ";
        
        if (cnt == 0) {
            cout << "No trees.\n";
        }
        else if (cnt == 1) {
            cout << "There is one tree.\n";
        }
        else {
            cout << "A forest of " << cnt << " trees.\n";
        }
        
        caseNumber++;
    }
    
    return 0;
}