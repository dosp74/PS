#include <bits/stdc++.h>
using namespace std;

string bfs(int A, int B) {
    bool visited[10000] = { false };
    int parent[10000]; // parent[x] = x로 오기 직전 숫자
    char how[10000]; // how[x] = 어떤 명령어로 왔는지
    
    queue<int> q;
    q.push(A);
    visited[A] = true;
    
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        
        if (now == B) {
            break;
        }
        
        // D
        int next = (now * 2) % 10000;
        
        if (!visited[next]) {
            visited[next] = true;
            parent[next] = now;
            how[next] = 'D';
            q.push(next);
        }
        
        // S
        next = (now == 0) ? 9999 : now - 1;
        
        if (!visited[next]) {
            visited[next] = true;
            parent[next] = now;
            how[next] = 'S';
            q.push(next);
        }
        
        // L
        next = (now % 1000) * 10 + (now / 1000);
        
        if (!visited[next]) {
            visited[next] = true;
            parent[next] = now;
            how[next] = 'L';
            q.push(next);
        }
        
        // R
        next = (now % 10) * 1000 + (now / 10);
        
        if (!visited[next]) {
            visited[next] = true;
            parent[next] = now;
            how[next] = 'R';
            q.push(next);
        }
    }
    
    string result = "";
    int cur = B;
    
    while (cur != A) {
        result = how[cur] + result;
        cur = parent[cur];
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        
        cout << bfs(A, B) << "\n";
    }
    
    return 0;
}