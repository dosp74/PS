#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    stack<int> line;
    int current = 1;
    
    while (N--) {
        int number;
        cin >> number;
        
        while (!line.empty() && line.top() == current) {
            current++;
            line.pop();
        }
        
        if (number == current) {
            current++;
        }
        else {
            line.push(number);
        }
    }
    
    while (!line.empty()) {
        if (line.top() == current) {
            current++;
            line.pop();
        }
        else {
            cout << "Sad";
            
            return 0;
        }
    }
    
    cout << "Nice";
    
    return 0;
}