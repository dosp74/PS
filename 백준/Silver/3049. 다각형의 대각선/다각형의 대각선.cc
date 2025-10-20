#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    if (N < 4) {
        cout << 0;
    }
    else {
        long long result = N * (N - 1) * (N - 2) * (N - 3) / 24;
        
        cout << result;
    }
    
    return 0;
}