#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int hanSu = 0;
    bool isHanSu = false;
    
    for (int i = 1; i <= N; i++) {
        isHanSu = true;
        string s = to_string(i);
        int d;
        
        for (int j = 0; j < s.length(); j++) {
            if (s.length() == 1) {
                break;
            }
            
            if (j == 0 && s.length() >= 2) {
                d = (s[j] - '0') - (s[j + 1] - '0');
            }
            
            if (j <= s.length() - 2 && (s[j] - '0') - (s[j + 1] - '0') != d) {
                isHanSu = false;
                
                break;
            }
        }
        
        if (isHanSu) {
            hanSu++;
        }
    }
    
    cout << hanSu;
    
    return 0;
}