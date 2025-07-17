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
        string command;
        cin >> command;
        
        if (command == "push_front") {
            int number;
            cin >> number;
            deque.push_front(number);
        }
        else if (command == "push_back") {
            int number;
            cin >> number;
            deque.push_back(number);
        }
        else if (command == "pop_front") {
            if (!deque.empty()) {
                cout << deque.front() << "\n";
                deque.pop_front();
            }
            else {
                cout << "-1\n";
            }
        }
        else if (command == "pop_back") {
            if (!deque.empty()) {
                cout << deque.back() << "\n";
                deque.pop_back();
            }
            else {
                cout << "-1\n";
            }
        }
        else if (command == "size") {
            if (deque.empty()) {
                cout << "0\n";
            }
            else {
                cout << deque.size() << "\n";
            }
        }
        else if (command == "empty") {
            if (deque.empty()) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        else if (command == "front") {
            if (deque.empty()) {
                cout << "-1\n";
            }
            else {
                cout << deque.front() << "\n";
            }
        }
        else {
            if (deque.empty()) {
                cout << "-1\n";
            }
            else {
                cout << deque.back() << "\n";
            }
        }
    }
    
    return 0;
}