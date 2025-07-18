#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> S;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        S.push_back(number);
    }
    
    stack<int> s;
    vector<char> operators;
    int index = 0;
    
    for (int i = 1; i <= n; i++) {
        while (!s.empty() && s.top() == S[index]) {
            s.pop();
            operators.push_back('-');
            index++;
        }
        
        s.push(i);
        operators.push_back('+');
    }
    
    while (!s.empty() && s.top() == S[index]) {
        s.pop();
        operators.push_back('-');
        
        if (index != n) {
            index++;
        }
    }
    
    if (index != n) {
        cout << "NO";
        
        return 0;
    }
    
    for (int i = 0; i < operators.size(); i++) {
        cout << operators[i] << "\n";
    }
    
    return 0;
}