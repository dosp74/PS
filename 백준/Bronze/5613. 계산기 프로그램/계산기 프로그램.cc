#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long result;
    cin >> result;
    
    while (true) {
        char op;
        cin >> op;
        
        if (op == '=') {
            break;
        }
        
        long long num;
        cin >> num;
        
        if (op == '+') {
            result += num;
        }
        else if (op == '-') {
            result -= num;
        }
        else if (op == '*') {
            result *= num;
        }
        else if (op == '/') {
            result /= num;
        }
    }
    
    cout << result;
    
    return 0;
}