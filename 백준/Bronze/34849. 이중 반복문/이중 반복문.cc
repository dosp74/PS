#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    if (N <= 10000) {
        cout << "Accepted";
    }
    else {
        cout << "Time limit exceeded";
    }
    
    return 0;
}