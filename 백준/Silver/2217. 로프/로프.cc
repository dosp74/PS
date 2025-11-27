#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> rope(N);
    for (int i = 0; i < N; i++) {
        cin >> rope[i];
    }
    
    sort(rope.begin(), rope.end(), greater<int>());
    
    int result = rope[0];
    
    for (int i = 1; i < N; i++) {
        if (rope[i] * (i + 1) >= result) {
            result = rope[i] * (i + 1);
        }
    }
    
    cout << result;
    
    return 0;
}