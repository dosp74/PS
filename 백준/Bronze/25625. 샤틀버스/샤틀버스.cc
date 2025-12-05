#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y;
    cin >> x >> y;
    
    int time;
    
    if (y < x) {
        time = x + y;
    }
    else {
        time = y - x;
    }
    
    cout << time;
    
    return 0;
}