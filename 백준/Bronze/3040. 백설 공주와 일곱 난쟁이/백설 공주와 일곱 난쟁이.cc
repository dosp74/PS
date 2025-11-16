#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> input(9);
    int sum = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> input[i];
        sum += input[i];
    }
    
    int tolerance = sum - 100;
    
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (input[i] + input[j] == tolerance) {
                input.erase(input.begin() + i);
                input.erase(input.begin() + j - 1);
                
                for (int i : input) {
                    cout << i << "\n";
                }
                
                return 0;
            }
        }
    }
    
    return -1;
}