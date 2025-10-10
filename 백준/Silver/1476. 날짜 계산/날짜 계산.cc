#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int E, S, M;
    cin >> E >> S >> M;
    
    int cE = 1, cS = 1, cM = 1, year = 1;
    
    while (!(cE == E && cS == S && cM == M)) {
        cE++; cS++; cM++;
        
        if (cE == 16) {
            cE = 1;
        }
        
        if (cS == 29) {
            cS = 1;
        }
        
        if (cM == 20) {
            cM = 1;
        }
        
        year++;
    }
    
    cout << year;
    
    return 0;
}