#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S;
    cin >> S;
    
    int cnt = 1;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == ',') {
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}