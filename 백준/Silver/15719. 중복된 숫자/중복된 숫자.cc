#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int result = 0;
    
    for (int i = 1; i <= N - 1; i++) {
        result ^= i;
    }
    
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        result ^= x;
    }
    
    cout << result;
    
    return 0;
}