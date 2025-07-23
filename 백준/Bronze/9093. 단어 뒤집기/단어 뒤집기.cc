#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--) {
        string str;
        getline(cin, str);
        
        stack<char> s;
        
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != ' ') {
                s.push(str[i]);
            }
            else {
                while (!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
                
                cout << " ";
            }
        }
        
        while (!s.empty()) {
            cout << s.top();
            s.pop();
        }
        
        cout << "\n";
    }
    
    return 0;
}