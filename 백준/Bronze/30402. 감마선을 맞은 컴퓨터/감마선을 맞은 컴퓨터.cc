#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            string s;
            cin >> s;
            
            if (s == "w") {
                cout << "chunbae";
                
                return 0;
            }
            
            if (s == "b") {
                cout << "nabi";
                
                return 0;
            }
            
            if (s == "g") {
                cout << "yeongcheol";
                
                return 0;
            }
        }
    }
    
    return 0;
}