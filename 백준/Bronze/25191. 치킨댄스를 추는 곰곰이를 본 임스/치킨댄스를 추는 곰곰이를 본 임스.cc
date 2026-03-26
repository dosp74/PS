#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int A, B;
    cin >> A >> B;
    
    A /= 2;
    
    cout << min(N, A + B);
    
    return 0;
}