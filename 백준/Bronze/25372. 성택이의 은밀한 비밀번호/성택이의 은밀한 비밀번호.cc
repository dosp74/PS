#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string password;
        cin >> password;
        
        if (password.length() >= 6 && password.length() <= 9) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
    
    return 0;
}