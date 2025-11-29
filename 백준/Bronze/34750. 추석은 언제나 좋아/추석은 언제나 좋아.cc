#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int payback, result;
    
    if (N >= 1000000) {
        payback = N - (N * 20 / 100);
        result = N * 20 / 100;
    }
    else if (N >= 500000) {
        payback = N - (N * 15 / 100);
        result = N * 15 / 100;
    }
    else if (N >= 100000) {
        payback = N - (N * 10 / 100);
        result = N * 10 / 100;
    }
    else {
        payback = N - (N * 5 / 100);
        result = N * 5 / 100;
    }
    
    cout << result << " " << payback;
    
    return 0;
}