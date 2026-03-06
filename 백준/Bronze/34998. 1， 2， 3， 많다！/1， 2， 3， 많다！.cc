#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    while (N--) {
        int X;
        cin >> X;
        
        string s;
        cin >> s;
        
        int result = 0;
        bool many = false;
        
        if (s == "!") {
            many = true;
        }
        else {
            result = stoi(s);
        }
        
        while (X--) {
            char op;
            string num;
            cin >> op >> num;
            
            if (many) {
                continue;
            }
            
            if (num == "!") {
                many = true;
            }
            else {
                result += stoi(num);
                
                if (result > 9) {
                    many = true;
                }
            }
        }
        
        if (many) {
            cout << "!\n";
        }
        else {
            cout << result << "\n";
        }
    }
    
    return 0;
}