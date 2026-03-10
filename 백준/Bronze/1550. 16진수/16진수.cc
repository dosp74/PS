#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string hex;
    cin >> hex;
    
    int decimal = stoi(hex, nullptr, 16);
    
    cout << decimal;
    
    return 0;
}