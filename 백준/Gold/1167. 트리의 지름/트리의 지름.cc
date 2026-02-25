#include <bits/stdc++.h>
using namespace std;

int V; // 트리의 정점의 개수
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
    
    cin >> V;
    
    graph.resize(V + 1);
    
    for (int i = 0; i < V; i++) {
        int from;
        cin >> from;
        
        while (true) {
            int to;
            cin >> to;
            
            if (to == -1) {
                break;
            }
            
            int weight;
            cin >> weight;
            
            graph[from].push_back({to, weight});
        }
    }
    
    visited.assign(V + 1, false);
    dfs(1, 0);
    
    visited.assign(V + 1, false);
    maxDist = 0;
    dfs(farNode, 0);
    
    cout << maxDist;
    
    return 0;
}