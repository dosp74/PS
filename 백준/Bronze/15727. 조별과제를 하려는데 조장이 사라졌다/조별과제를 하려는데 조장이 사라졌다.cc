#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int L;
    cin >> L;
    
    if (L % 5 == 0) {
        cout << L / 5;
    }
    else {
        cout << L / 5 + 1;
    }
    
    return 0;
}