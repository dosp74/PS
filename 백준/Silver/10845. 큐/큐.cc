#include <iostream>
#include <list>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    list<int> queue;
    
    int N;
    cin >> N;
    
    while (N--) {
        string command;
        cin >> command;
        
        if (command == "push") {
            int number;
            cin >> number;
            queue.push_back(number);
        }
        else if (command == "pop") {
            if (queue.empty()) {
                cout << "-1\n";
            }
            else {
                cout << queue.front() << "\n";
                queue.pop_front();
            }
        }
        else if (command == "size") {
            cout << queue.size() << "\n";
        }
        else if (command == "empty") {
            if (queue.empty()) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        else if (command == "front") {
            if (queue.empty()) {
                cout << "-1\n";
                
                continue;
            }
            cout << queue.front() << "\n";
        }
        else {
            if (queue.empty()) {
                cout << "-1\n";
                
                continue;
            }
            cout << queue.back() << "\n";
        }
    }
    
    return 0;
}