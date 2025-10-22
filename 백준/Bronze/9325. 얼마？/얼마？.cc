#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int s;
        cin >> s;
        
        int n;
        cin >> n;
        
        int price = s;
        
        for (int i = 0; i < n; i++) {
            int q, p;
            cin >> q >> p;
            
            price += q * p;
        }
        
        cout << price << "\n";
    }
    
    return 0;
}