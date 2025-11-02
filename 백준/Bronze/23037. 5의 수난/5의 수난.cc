#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n;
    cin >> n;
    
    int result = 0;
    
    for (int i = 0; i < 5; i++) {
        int num = n[i] - '0';
        int temp = num;
        
        for (int j = 0; j < 4; j++) {
            num *= temp;
        }
        
        result += num;
    }
    
    cout << result;
    
    return 0;
}