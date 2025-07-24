#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string bars;
    cin >> bars;
    
    stack<char> s;
    int bar = 0;
    int total = 0;
    
    for (int i = 0; i < bars.size(); i++) {
        if (bars[i] == '(') {
            if (!s.empty() && s.top() == '(') {
                bar++;
            }
            
            s.push('(');
        }
        else { // bars[i] == ')'
            if (!s.empty() && s.top() == '(') { // 레이저인 경우
                total += bar;
            }
            else if (!s.empty() && s.top() == ')') { // 쇠막대기가 끝나는 경우
                total++;
                bar--;
            }
            
            s.push(')');
        }
    }
    
    cout << total;
    
    return 0;
}