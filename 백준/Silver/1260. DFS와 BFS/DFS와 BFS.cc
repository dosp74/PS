#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 1001;
vector<int> graph[MAX]; // 인접 리스트
int visited_dfs[MAX];
int visited_bfs[MAX];
list<int> list_dfs;
list<int> list_bfs;
int N, M; // N은 정점, M은 간선의 개수

void dfs(int vertex) {
    visited_dfs[vertex] = 1;
    list_dfs.push_back(vertex);
    
    for (int next : graph[vertex]) {
        if (!visited_dfs[next]) {
            dfs(next);
        }
    }
}

void bfs(int start) {
    visited_bfs[start] = 1;
    list_bfs.push_back(start);
    queue<int> q;
    q.push(start);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int next : graph[u]) {
            if (!visited_bfs[next]) {
                visited_bfs[next] = 1;
                list_bfs.push_back(next);
                q.push(next);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> M;
    
    int V; // 탐색을 시작할 정점의 번호
    cin >> V;
    
    for (int i = 1; i <= M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    
    dfs(V);
    bfs(V);
    
    for (const auto& v : list_dfs) {
        cout << v << " ";
    }
    
    cout << "\n";
    
    for (const auto& v : list_bfs) {
        cout << v << " ";
    }
    
    return 0;
}