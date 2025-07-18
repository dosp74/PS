#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> S(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    
    stack<int> s;
    vector<char> operators;
    int index = 0;
    
    for (int i = 1; i <= n; i++) {
        s.push(i);
        operators.push_back('+');
        
        while (!s.empty() && s.top() == S[index]) {
            s.pop();
            operators.push_back('-');
            index++;
        }
    }
    
    if (index != n) {
        cout << "NO";
        
        return 0;
    }
    
    for (char op : operators) {
        cout << op << "\n";
    }
    
    return 0;
}