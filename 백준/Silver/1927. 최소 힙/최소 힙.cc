#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    priority_queue<int, vector<int>, greater<int>> min_pq;
    
    while (N--) {
        int number;
        cin >> number;
        
        if (number == 0) {
            if (!min_pq.empty()) {
                cout << min_pq.top() << "\n";
                min_pq.pop();
            }
            else {
                cout << "0\n";
            }
        }
        else {
            min_pq.push(number);
        }
    }
    
    return 0;
}