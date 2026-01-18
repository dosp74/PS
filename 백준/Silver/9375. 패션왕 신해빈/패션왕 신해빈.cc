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
        
        unordered_map<string, int> wears;
        
        for (int i = 1; i <= n; i++) {
            string name, kind;
            cin >> name >> kind;
            wears[kind]++;
        }
        
        int result = 1;
        
        for (const auto& p : wears) {
            result *= (p.second + 1);
        }
        
        result--; // 알몸
        
        cout << result << "\n";
    }
    
    return 0;
}