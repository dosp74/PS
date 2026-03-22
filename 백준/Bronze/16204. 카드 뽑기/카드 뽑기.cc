#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N, M, K;
    cin >> N >> M >> K;
    
    long long answer = min(M, K) + min(N - M, N - K);
    
    cout << answer;
    
    return 0;
}