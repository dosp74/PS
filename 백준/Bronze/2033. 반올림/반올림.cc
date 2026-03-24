#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int p = 10;
    
    while (p <= N) {
        N = ((N + p / 2) / p) * p;
        p *= 10;
    }
    
    cout << N;
    
    return 0;
}