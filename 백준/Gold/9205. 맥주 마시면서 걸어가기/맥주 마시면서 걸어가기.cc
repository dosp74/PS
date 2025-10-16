#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

// 두 좌표 사이의 맨해튼 거리를 계산하는 함수
int distance(const Point& a, const Point& b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n; // 맥주를 파는 편의점의 개수
        cin >> n;
        
        vector<Point> graph(n + 2);
        vector<bool> visited(n + 2, false);
        
        for (int i = 0; i < n + 2; i++) {
            cin >> graph[i].x >> graph[i].y;
        }
        
        queue<int> q;
        q.push(0);
        visited[0] = true;
        bool isHappy = false;
        
        while (!q.empty()) {
            int c = q.front();
            q.pop();
            
            if (distance(graph[c], graph[n + 1]) <= 1000) {
                isHappy = true;
                
                break;
            }
            
            for (int i = 0; i < n + 2; i++) {
                if (!visited[i] && distance(graph[c], graph[i]) <= 1000) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        
        cout << (isHappy ? "happy\n" : "sad\n");
    }
    
    return 0;
}