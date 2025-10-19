#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, d;
    cin >> n >> d;
    
    int frequentValue = 0;
    
    for (int i = 1; i <= n; i++) {
        string number = to_string(i);
        
        for (int j = 0; j < number.size(); j++) {
            if (number[j] - '0' == d) {
                frequentValue++;
            }
        }
    }
    
    cout << frequentValue;
    
    return 0;
}