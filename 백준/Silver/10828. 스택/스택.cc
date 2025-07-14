#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> stack;
    int top = -1;
    
    while (N--) {
        string command;
        cin >> command;
        
        if (command == "push") {
            int num;
            cin >> num;
            stack.push_back(num);
            top++;
        }
        else if (command == "pop") {
            if (top == -1) {
                cout << "-1 \n";
                
                continue;
            }
            
            int tempTop = stack[top];
            stack.pop_back();
            top--;
            cout << tempTop << "\n";
        }
        else if (command == "size") {
            cout << stack.size() << "\n";
        }
        else if (command == "empty") {
            if (top == -1) {
                cout << "1 \n";
            }
            else {
                cout << "0 \n";
            }
        }
        else { // command == "top"
            if (top == -1) {
                cout << "-1 \n";
            }
            else {
                cout << stack[top] << "\n";
            }
        }
    }
    
    return 0;
}