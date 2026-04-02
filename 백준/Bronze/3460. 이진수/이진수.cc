#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        int idx = 0;
        
        while (n > 0) {
            if (n % 2 == 1) {
                cout << idx << " ";
            }
            
            n /= 2;
            idx++;
        }
        
        cout << "\n";
    }
    
    
    return 0;
}