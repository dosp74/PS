#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int K;
    cin >> K;
    
    stack<int> numbers;
    
    while (K--) {
        int number;
        cin >> number;
        
        if (number == 0) {
            numbers.pop();
            
            continue;
        }
        
        numbers.push(number);
    }
    
    int sum = 0;
    
    while (!numbers.empty()) {
        sum += numbers.top();
        numbers.pop();
    }
    
    cout << sum;
    
    return 0;
}