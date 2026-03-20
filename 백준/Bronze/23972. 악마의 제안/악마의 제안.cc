#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long K, N;
    cin >> K >> N;
    
    cout << (N == 1 ? -1 : (N * K + N - 2) / (N - 1));
    
    return 0;
}