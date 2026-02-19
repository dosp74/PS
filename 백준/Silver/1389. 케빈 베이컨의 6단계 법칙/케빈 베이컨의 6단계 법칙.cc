#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    // 인접 리스트
    vector<vector<int>> graph(N + 1);
    
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }
    
    int minKevin = 1e9;
    int answer = 0;
    
    for (int i = 1; i <= N; i++) {
        vector<int> dist(N + 1, -1);
        queue<int> q;
        
        dist[i] = 0;
        q.push(i);
        
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            
            for (int next : graph[cur]) {
                if (dist[next] == -1) {
                    dist[next] = dist[cur] + 1;
                    q.push(next);
                }
            }
        }
        
        int sum = 0;
        
        for (int j = 1; j <= N; j++) {
            sum += dist[j];
        }
        
        if (sum < minKevin) {
            minKevin = sum;
            answer = i;
        }
    }
    
    cout << answer;
    
    return 0;
}