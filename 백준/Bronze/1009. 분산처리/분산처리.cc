#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int a, b;
        cin >> a >> b;
        
        int base = a % 10;
        int cnt = b - 1;
        int last = base;
        
        while (cnt--) {
            last = last * base % 10;
        }
        
        if (last == 0) { // 10
            cout << "10\n";
        }
        else {
            cout << last << "\n";
        }
    }
    
    return 0;
}