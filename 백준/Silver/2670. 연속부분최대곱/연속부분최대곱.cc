#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    double x;
    cin >> N >> x;
    
    double currentMax = x;
    double answer = x;
    
    for (int i = 1; i < N; i++) {
        cin >> x;
        currentMax = max(x, currentMax * x);
        answer = max(answer, currentMax);
    }
    
    cout << fixed << setprecision(3) << answer;
    
    return 0;
}