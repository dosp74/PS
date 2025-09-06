#include <iostream>
using namespace std;

const int MAX = 101;
int graph[MAX][MAX]; // 인접 행렬
int visited[MAX];
int N, M;
int cnt = 0; // 웜 바이러스에 걸린 컴퓨터 수

void dfs(int vertex) {
    visited[vertex] = 1;
    cnt++; // 현재 정점 방문
    
    for (int i = 1; i <= N; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> M;
    
    for (int i = 1; i <= M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    
    dfs(1);
    
    cout << cnt - 1;
    
    return 0;
}