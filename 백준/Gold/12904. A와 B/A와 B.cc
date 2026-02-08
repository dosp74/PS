#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S, T;
    cin >> S >> T;
    
    while (T.size() > S.size()) {
        if (T.back() == 'A') {
            T.pop_back();
        }
        else { // 'B'
            T.pop_back();
            reverse(T.begin(), T.end());
        }
    }
    
    cout << (T == S ? 1 : 0);
    
    return 0;
}