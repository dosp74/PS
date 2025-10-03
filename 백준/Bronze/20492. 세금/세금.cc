#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    cout << N - (N * 22 / 100) << " " << N - (N * 20 / 100 * 22 / 100);
    
    return 0;
}