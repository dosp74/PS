#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    cin >> N;
    
    if ((N & (N - 1)) == 0) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    
    return 0;
}