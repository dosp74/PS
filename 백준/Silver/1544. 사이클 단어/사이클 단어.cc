#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    map<string, bool> m;
    
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        
        int len = s.length();
        string minStr = s;
        
        for (int j = 1; j < len; j++) {
            string rotated = s.substr(j) + s.substr(0, j);
            
            if (rotated < minStr) {
                minStr = rotated;
            }
        }
        
        m[minStr] = true;
    }
    
    cout << m.size();
    
    return 0;
}