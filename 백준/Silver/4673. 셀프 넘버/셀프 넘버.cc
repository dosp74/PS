#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    set<int> s;
    for (int i = 1; i <= 10000; i++) {
        s.insert(i);
    }
    
    for (int i = 1; i <= 10000; i++) {
        int selfNumber = i;
        string temp = to_string(i);
        
        for (int j = 0; j < temp.length(); j++) {
            char c = temp[j];
            selfNumber += c - '0';
        }
        
        s.erase(selfNumber);
    }
    
    for (int result : s) {
        cout << result << "\n";
    }
    
    return 0;
}