#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    int case1 = abs((A + B) - (C + D));
    int case2 = abs((A + C) - (B + D));
    int case3 = abs((A + D) - (B + C));
    
    cout << min(case1, min(case2, case3));
    
    return 0;
}