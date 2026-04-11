#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long p[4];
    for (int i = 0; i < 4; i++) {
        cin >> p[i];
    }
    
    long long x, y, r;
    cin >> x >> y >> r;
    
    for (int i = 0; i < 4; i++) {
        if (p[i] == x) {
            cout << i + 1;
            
            return 0;
        }
    }
    
    cout << 0;
    
    return 0;
}