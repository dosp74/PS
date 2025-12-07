#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, W, H, L;
    cin >> N >> W >> H >> L;
    
    cout << min(N, (W / L) * (H / L));
    
    return 0;
}