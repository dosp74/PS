#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        vector<int> v;
        
        for (int i = 0; i < 7; i++) {
            int number;
            cin >> number;
            
            if (number % 2 == 0) {
                v.push_back(number);
            }
        }
        
        sort(v.begin(), v.end());
        
        int sum = 0;
        
        for (int i : v) {
            sum += i;
        }
        
        cout << sum << " " << v[0] << "\n";
    }
    
    return 0;
}