#include <iostream>
#include <list>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    list<int> deque;
    
    while (N--) {
        int command;
        cin >> command;
        
        switch (command) {
            case 1:
                int num1;
                cin >> num1;
                deque.push_front(num1);
                break;
            case 2:
                int num2;
                cin >> num2;
                deque.push_back(num2);
                break;
            case 3:
                if (!deque.empty()) {
                    cout << deque.front() << "\n";
                    deque.pop_front();
                }
                else {
                    cout << "-1\n";
                }
                break;
            case 4:
                if (!deque.empty()) {
                    cout << deque.back() << "\n";
                    deque.pop_back();
                }
                else {
                    cout << "-1\n";
                }
                break;
            case 5:
                if (deque.empty()) {
                    cout << "0\n";
                }
                else {
                    cout << deque.size() << "\n";
                }
                break;
            case 6:
                if (deque.empty()) {
                    cout << "1\n";
                }
                else {
                    cout << "0\n";
                }
                break;
            case 7:
                if (deque.empty()) {
                    cout << "-1\n";
                }
                else {
                    cout << deque.front() << "\n";
                }
                break;
            case 8:
                if (deque.empty()) {
                    cout << "-1\n";
                }
                else {
                    cout << deque.back() << "\n";
                }
                break;
            default:
                break;
        }
    }
    
    return 0;
}