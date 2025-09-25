#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    if (N % 4 == 0 || N % 4 == 2) {
        cout << "CY";
    }
    else {
        cout << "SK";
    }
    
    return 0;
}