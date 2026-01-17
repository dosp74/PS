#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string input;
    cin >> input;
    
    int N;
    cin >> N;
    
    int cnt = 0;
    
    for (int i = 0; i < N; i++) {
        string subject;
        cin >> subject;
        
        bool isRe = true;
        
        for (int j = 0; j < 5; j++) {
            if (input[j] != subject[j]) {
                isRe = false;
                
                break;
            }
        }
        
        if (isRe) {
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}