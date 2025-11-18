#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> mushrooms(10);
    for (int i = 0; i < 10; i++) {
        cin >> mushrooms[i];
    }
    
    int sum = mushrooms[0];
    for (int i = 1; i < 10; i++) {
        if (abs(sum - 100) >= abs(sum + mushrooms[i] - 100)) {
            sum += mushrooms[i];
        }
        else {
            break;
        }
    }
    
    cout << sum;
    
    return 0;
}