#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    while (N--) {
        string K;
        cin >> K;
        
        char last = K.back();
        
        if ((last - '0') % 2 == 0) {
            cout << "even\n";
        }
        else {
            cout << "odd\n";
        }
    }
    
    return 0;
}