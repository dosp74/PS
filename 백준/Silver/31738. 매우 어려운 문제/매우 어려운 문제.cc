#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N, M;
    cin >> N >> M;
    
    if (N >= M) {
        cout << 0;
        
        return 0;
    }
    
    long long result = 1;
    for (long long i = 1; i <= N; i++) {
        result = (result * i) % M;
    }
    
    cout << result;
    
    return 0;
}