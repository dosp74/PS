#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long result = 0;
    
    for (int i = 0; i < 5; i++) {
        long long input;
        cin >> input;
        result += input;
    }
    
    cout << result;
    
    return 0;
}