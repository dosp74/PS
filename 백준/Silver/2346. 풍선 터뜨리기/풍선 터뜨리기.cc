#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    deque<pair<int, int>> dq;
    for (int i = 1; i <= N; i++) {
        int number;
        cin >> number;
        dq.push_back({number, i});
    }
    
    bool frontTurn = true;
    
    while (dq.size() != 1) {
        int number;
        
        if (frontTurn) {
            auto p = dq.front();
            number = p.first;
            cout << p.second << " ";
            dq.pop_front();
        }
        else {
            auto p = dq.back();
            number = p.first;
            cout << p.second << " ";
            dq.pop_back();
        }
        
        if (number > 0) {
            for (int i = 1; i < number; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            
            frontTurn = true;
        }
        else {
            for (int i = -1; i > number; i--) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            
            frontTurn = false;
        }
    }
    
    cout << dq.front().second;
    
    return 0;
}