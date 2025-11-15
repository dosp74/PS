#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M, N;
    cin >> M >> N;
    
    int sum = 0;
    vector<int> v;
    
    for (int i = M; i <= N; i++) {
        for (int j = 1; j <= 100; j++) {
            if (j * j == i) {
                sum += i;
                v.push_back(i);
                
                break;
            }
        }
    }
    
    if (v.empty()) {
        cout << -1;
        
        return 0;
    }
    
    cout << sum << "\n" << v[0];
    
    return 0;
}