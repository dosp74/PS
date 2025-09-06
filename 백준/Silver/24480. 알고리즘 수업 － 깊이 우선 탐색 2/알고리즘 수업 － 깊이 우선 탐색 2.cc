#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100001;
vector<int> graph[MAX]; // 인접 리스트
int visited[MAX];
int order[MAX];
int cnt = 0;

void dfs(int vertex) {
    visited[vertex] = 1; // 현재 정점 방문 표시
    order[vertex] = ++cnt; // 현재 정점이 몇 번째로 방문되었는지 저장
    
    for (int next : graph[vertex]) {
        if (!visited[next]) {
            dfs(next);
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
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }
    
    dfs(R);
    
    for (int i = 1; i <= N; i++) {
        cout << order[i] << "\n";
    }
    
    return 0;
}