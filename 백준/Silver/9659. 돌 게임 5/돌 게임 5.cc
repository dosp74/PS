#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    cin >> N;
    
    if (N % 2 == 0) {
        cout << "CY";
    }
    else {
        cout << "SK";
    }
    
    return 0;
}