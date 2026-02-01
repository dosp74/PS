#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    int idx = s.find(':');
    int n = stoi(s.substr(0, idx));
    int m = stoi(s.substr(idx + 1));
    
    int g = gcd(n, m);
    
    cout << n / g << ":" << m / g;
    
    return 0;
}