#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int D = 0, P = 0;
    
    while (N--) {
        char winner;
        cin >> winner;
        
        if (abs(D - P) == 2) {
            continue;
        }
        
        if (winner == 'D') {
            D++;
        }
        else {
            P++;
        }
    }
    
    cout << D << ":" << P;
    
    return 0;
}