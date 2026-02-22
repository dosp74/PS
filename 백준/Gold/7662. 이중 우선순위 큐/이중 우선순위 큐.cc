#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int k;
        cin >> k;
        
        priority_queue<pair<int, int>> maxHeap;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        
        vector<bool> visited(k, false);
        
        int id = 0;
        
        for (int i = 0; i < k; i++) {
            char op;
            int n;
            cin >> op >> n;
            
            if (op == 'I') {
                maxHeap.push({n, id});
                minHeap.push({n, id});
                visited[id] = true;
                id++;
            }
            else { // D
                if (n == 1) {
                    // 최댓값 삭제
                    while (!maxHeap.empty() && !visited[maxHeap.top().second]) { // lazy deletion
                        maxHeap.pop();
                    }
                    
                    if (!maxHeap.empty()) {
                        visited[maxHeap.top().second] = false;
                        maxHeap.pop();
                    }
                }
                else {
                    // 최솟값 삭제
                    while (!minHeap.empty() && !visited[minHeap.top().second]) {
                        minHeap.pop();
                    }
                    
                    if (!minHeap.empty()) {
                        visited[minHeap.top().second] = false;
                        minHeap.pop();
                    }
                }
            }
        }
        
        while (!maxHeap.empty() && !visited[maxHeap.top().second]) {
            maxHeap.pop();
        }
        
        while (!minHeap.empty() && !visited[minHeap.top().second]) {
            minHeap.pop();
        }
        
        if (maxHeap.empty() || minHeap.empty()) {
            cout << "EMPTY\n";
        }
        else {
            cout << maxHeap.top().first << " " << minHeap.top().first << "\n";
        }
    }
    
    return 0;
}