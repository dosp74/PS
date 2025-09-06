#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 100001;
vector<int> graph[MAX]; // 인접 리스트
int visited[MAX];
int order[MAX];
int cnt = 0;

void bfs(int start) {
    queue<int> q;
    visited[start] = 1;
    order[start] = ++cnt;
    q.push(start);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : graph[u]) {
            if (!visited[v]) {
                visited[v] = 1;
                order[v] = ++cnt;
                q.push(v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, R;
    cin >> N >> M >> R;
    
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    
    bfs(R);
    
    for (int i = 1; i <= N; i++) {
        cout << order[i] << "\n";
    }
    
    return 0;
}