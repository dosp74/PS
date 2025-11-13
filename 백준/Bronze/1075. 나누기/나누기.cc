#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, F;
    cin >> N >> F;
    
    int base = (N / 100) * 100; // 뒤 두 자리 00으로 만들기
    
    for (int i = 0; i <= 99; i++) {
        if ((base + i) % F == 0) {
            cout << setw(2) << setfill('0') << i;
            
            return 0;
        }
    }
    
    return 0;
}