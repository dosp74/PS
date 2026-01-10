#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int sum = 0;
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        
        if (x == 136) {
            sum += 1000;
        }
        else if (x == 142) {
            sum += 5000;
        }
        else if (x == 148) {
            sum += 10000;
        }
        else {
            sum += 50000;
        }
    }
    
    cout << sum;
    
    return 0;
}