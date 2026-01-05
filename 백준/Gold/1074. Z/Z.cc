#include <bits/stdc++.h>
using namespace std;

int z(int N, int r, int c) {
    if (N == 0) {
        return 0;
    }
    
    int half = 1 << (N - 1);
    int block = half * half;
    
    if (r < half && c < half) {
        return z(N - 1, r, c);
    }
    
    if (r < half && c >= half) {
        return block + z(N - 1, r, c - half);
    }
    
    if (r >= half && c < half) {
        return 2 * block + z(N - 1, r - half, c);
    }
    
    return 3 * block + z(N - 1, r - half, c - half);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, r, c;
    cin >> N >> r >> c;
    
    cout << z(N, r, c);
    
    return 0;
}