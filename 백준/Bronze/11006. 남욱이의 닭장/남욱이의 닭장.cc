#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        int U = M * 2 - N;
        int T = M - U;
        
        cout << U << " " << T << "\n";
    }
    
    return 0;
}