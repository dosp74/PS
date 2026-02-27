#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int sumValue = 0;
    int minValue = INT_MAX;
    bool isOdd = false;
    
    for (int i = 1; i <= 7; i++) {
        int num;
        cin >> num;
        
        if (num % 2 != 0) {
            isOdd = true;
            sumValue += num;
            minValue = min(minValue, num);
        }
    }
    
    if (!isOdd) {
        cout << -1;
        
        return 0;
    }
    
    cout << sumValue << "\n" << minValue;
    
    return 0;
}