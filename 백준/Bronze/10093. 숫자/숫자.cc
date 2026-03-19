#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long A, B;
    cin >> A >> B;
    
    long long start = min(A, B);
    long long end = max(A, B);
    
    long long cnt = end - start - 1;
    
    if (cnt <= 0) {
        cout << 0;
        
        return 0;
    }
    
    cout << cnt << "\n";
    
    for (long long i = start + 1; i < end; i++) {
        cout << i << " ";
    }
    
    return 0;
}