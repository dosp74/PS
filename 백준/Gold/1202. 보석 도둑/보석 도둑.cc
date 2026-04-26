#include <bits/stdc++.h>
using namespace std;

struct Jewel {
    int weight;
    int value;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    vector<Jewel> jewels(N);
    vector<int> bags(K);
    
    for (int i = 0; i < N; i++) {
        cin >> jewels[i].weight >> jewels[i].value;
    }
    
    for (int i = 0; i < K; i++) {
        cin >> bags[i];
    }
    
    sort(jewels.begin(), jewels.end(), [](const Jewel& a, const Jewel& b) {
        return a.weight < b.weight;
    });
    
    sort(bags.begin(), bags.end());
    
    // 현재 가방에 들어갈 수 있는 보석들의 가격
    priority_queue<int> pq;
    long long answer = 0;
    
    int idx = 0;
    
    for (int i = 0; i < K; i++) {
        int capacity = bags[i];
        
        while (idx < N && jewels[idx].weight <= capacity) {
            pq.push(jewels[idx].value);
            idx++;
        }
        
        if (!pq.empty()) {
            answer += pq.top();
            pq.pop();
        }
    }
    
    cout << answer;
    
    return 0;
}