#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    while (cin >> n) {
        vector<int> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        if (n == 1) {
            cout << "Jolly\n";
            
            continue;
        }
        
        vector<bool> used(n, false);
        bool isJolly = true;
        
        for (int i = 1; i < n; i++) {
            int diff = abs(v[i] - v[i - 1]);
            
            if (diff < 1 || diff >= n || used[diff]) {
                isJolly = false;
                
                break;
            }
            
            used[diff] = true;
        }
        
        if (isJolly) {
            cout << "Jolly\n";
        }
        else {
            cout << "Not jolly\n";
        }
    }
    
    return 0;
}