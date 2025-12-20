#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long A, B, C;
    cin >> A >> B >> C;
    
    if (C <= B) {
        cout << -1;
        
        return 0;
    }
    
    long long breakEvenPoint = A / (C - B) + 1;
    cout << breakEvenPoint;
    
    return 0;
}