#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    string result = "";
    result += s[0];
    
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == '-') {
            result += s[i + 1];
        }
    }
    
    cout << result;
    
    return 0;
}