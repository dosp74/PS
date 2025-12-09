#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    unordered_set<int> s;
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        
        if (s.find(num) == s.end()) {
            s.insert(num);
        }
        else {
            s.erase(num);
        }
    }
    
    for (int n : s) {
        cout << n;
    }
    
    return 0;
}