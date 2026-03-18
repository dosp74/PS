#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cin.ignore(); // 개행 제거
    
    while (n--) {
        string input;
        getline(cin, input);
        
        for (char& c : input) {
            c = tolower(c);
        }
        
        string reversedInput = input;
        reverse(reversedInput.begin(), reversedInput.end());
        
        if (input == reversedInput) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    
    return 0;
}