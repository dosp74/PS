#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    priority_queue<int> pq;
    
    while (N--) {
        int number;
        cin >> number;
        
        if (number == 0) {
            if (!pq.empty()) {
                cout << pq.top() << "\n";
                pq.pop();
            }
            else {
                cout << "0\n";
            }
        }
        else {
            pq.push(number);
        }
    }
    
    return 0;
}