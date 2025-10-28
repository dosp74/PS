#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S;
    cin >> S;
    
    int countZero = 0, countOne = 0;
    bool isZero = (S[0] == '0') ? true : false;
    
    if (isZero) {
        countZero++;
    }
    else {
        countOne++;
    }
    
    for (int i = 1; i < S.length(); i++) {
        if (isZero && S[i] == '0') {
            continue;
        }
        
        if (!isZero && S[i] == '1') {
            continue;
        }
        
        if (isZero && S[i] == '1') {
            countOne++;
            isZero = !isZero;
        }
        else if (!isZero && S[i] == '0') {
            countZero++;
            isZero = !isZero;
        }
    }
    
    cout << min(countZero, countOne);
    
    return 0;
}