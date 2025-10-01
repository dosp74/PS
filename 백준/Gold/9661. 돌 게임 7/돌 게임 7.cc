#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    cin >> N;
    
    // 상근이 기준 승 패 승 승 패가 반복된다.
    if (N % 5 == 2 || N % 5 == 0) {
        cout << "CY";
    }
    else {
        cout << "SK";
    }
    
    return 0;
}