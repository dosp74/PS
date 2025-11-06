#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A, B;
    cin >> A >> B;
    
    if (A > B) {
        cout << 2 * B + 1;
    }
    else if (A == B) {
        cout << 2 * B - 1;
    }
    else {
        cout << 2 * A - 1;
    }
    
    return 0;
}