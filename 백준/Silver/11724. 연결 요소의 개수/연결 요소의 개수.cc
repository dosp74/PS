#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1001];
bool visited[1001];
int N, M;

void dfs(int start) {
    visited[start] = true;
    
    for (int next : graph[start]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    int count = 0;
    
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            dfs(i);
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}