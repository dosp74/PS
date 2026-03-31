#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string A, B, C, D;
    cin >> A >> B >> C >> D;
    
    string AB = A + B;
    string CD = C + D;
    
    cout << stoll(AB) + stoll(CD);
    
    return 0;
}