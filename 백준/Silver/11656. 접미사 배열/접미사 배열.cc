#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S;
    cin >> S;
    
    vector<string> v;
    
    for (int i = 0; i < S.length(); i++) {
        string temp = S.substr(i);
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    
    for (const auto& s : v) {
        cout << s << "\n";
    }
    
    return 0;
}