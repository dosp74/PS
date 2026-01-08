#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    string S;
    cin >> N >> M >> S;
    
    string pn = "I";
    for (int i = 0; i < N; i++) {
        pn += "OI";
    }
    
    int cnt = 0;
    
    for (int i = 0; i < M; i++) {
        bool isPN = true;
        int temp = i;
        
        for (int j = 0; j < pn.length(); j++) {
            if (S[temp++] != pn[j]) {
                isPN = false;
                
                break;
            }
        }
        
        if (isPN) {
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}