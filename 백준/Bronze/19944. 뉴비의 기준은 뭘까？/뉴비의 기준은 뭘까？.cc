#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    if (M == 1 || M == 2) {
        cout << "NEWBIE!";
        
        return 0;
    }
    
    if (M <= N) {
        cout << "OLDBIE!";
        
        return 0;
    }
    
    cout << "TLE!";
    
    return 0;
}