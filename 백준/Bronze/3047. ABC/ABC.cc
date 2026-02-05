#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + 3);
    
    string order;
    cin >> order;
    
    for (char c : order) {
        if (c == 'A') {
            cout << arr[0] << " ";
        }
        else if (c == 'B') {
            cout << arr[1] << " ";
        }
        else if (c == 'C') {
            cout << arr[2] << " ";
        }
    }
    
    return 0;
}