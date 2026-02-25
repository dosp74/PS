#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<pair<int, int>>> graph;
vector<bool> visited;

int maxDist = 0;
int farNode = 0;

void dfs(int node, int dist) {
    visited[node] = true;
    
    if (dist > maxDist) {
        maxDist = dist;
        farNode = node;
    }
    
    for (auto& next : graph[node]) {
        int nextNode = next.first;
        int weight = next.second;
        
        if (!visited[nextNode]) {
            dfs(nextNode, dist + weight);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    graph.resize(n + 1);
    
    for (int i = 0; i < n - 1; i++) {
        int from, to, weight;
        cin >> from >> to >> weight;
        
        graph[from].push_back({to, weight});
        graph[to].push_back({from, weight});
    }
    
    visited.assign(n + 1, false);
    dfs(1, 0);
    
    visited.assign(n + 1, false);
    maxDist = 0;
    dfs(farNode, 0);
    
    cout << maxDist;
    
    return 0;
}