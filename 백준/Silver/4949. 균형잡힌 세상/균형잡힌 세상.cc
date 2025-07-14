#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string str;
    
    while (getline(cin, str)) {
        if (str.size() == 1 && str[0] == '.') {
             break;
        }
        
        stack<char> s;
        bool isComplete = false;
        
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(' || str[i] == '[') {
                s.push(str[i]);
            }
            else if (str[i] == ')') {
                if (s.empty()) {
                    isComplete = true;
                    cout << "no\n";
                    
                    break;
                }
                
                if (s.top() == '(') {
                    s.pop();
                }
                else {
                    isComplete = true;
                    cout << "no\n";
                    
                    break;
                }
            }
            else if (str[i] == ']') {
                if (s.empty()) {
                    isComplete = true;
                    cout << "no\n";
                    
                    break;
                }
                
                if (s.top() == '[') {
                    s.pop();
                }
                else {
                    isComplete = true;
                    cout << "no\n";
                    
                    break;
                }
            }
        }
        
        if (isComplete) {
            continue;
        }
        
        if (s.empty()) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
    
    return 0;
}