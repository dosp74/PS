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
        int command;
        cin >> command;
        
        switch (command) {
            case 1:
                int num;
                cin >> num;
                stack.push_back(num);
                top++;
                break;
            case 2:
                if (top == -1) {
                    cout << "-1 \n";
                }
                else {
                    int tempTop = stack[top];
                    stack.pop_back();
                    top--;
                    cout << tempTop << "\n";
                }
                break;
            case 3:
                cout << stack.size() << "\n";
                break;
            case 4:
                if (top == -1) {
                    cout << "1 \n";
                }
                else {
                    cout << "0 \n";
                }
                break;
            case 5:
                if (top == -1) {
                    cout << "-1 \n";
                }
                else {
                    cout << stack[top] << "\n";
                }
                break;
            default:
                break;
        }
    }
    
    return 0;
}