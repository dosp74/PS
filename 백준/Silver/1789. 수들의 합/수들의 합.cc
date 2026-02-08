#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    unsigned long long S;
    cin >> S;
    
    unsigned long long sum = 0;
    unsigned long long n = 0;
    
    while (true) {
        if (sum + (n + 1) > S) {
            break;
        }
        
        n++;
        sum += n;
    }
    
    cout << n;
    
    return 0;
}