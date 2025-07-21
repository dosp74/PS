#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        queue<pair<int, int>> print;
        priority_queue<int> printPriority;
        
        for (int i = 0; i < N; i++) {
            int priority;
            cin >> priority;
            
            print.push({i, priority});
            printPriority.push(priority);
        }
        
        int current = 0;
        int maxPriority = printPriority.top();
        
        while (true) {
            if (print.front().second == maxPriority) {
                if (print.front().first == M) {
                    current++;
                    cout << current << "\n";
                    
                    break;
                }
                
                current++;
                print.pop();
                printPriority.pop();
                maxPriority = printPriority.top();
            }
            else {
                print.push(print.front());
                print.pop();
            }
        }
    }
    
    return 0;
}