#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int cnt = 0;
    
    for (int i = 1; i <= N; i++) {
        string s = to_string(i);
        
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == '3' || s[j] == '6' || s[j] == '9') {
                cnt++;
            }
        }
    }
    
    cout << cnt;
    
    return 0;
}