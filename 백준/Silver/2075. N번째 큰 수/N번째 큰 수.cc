#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    priority_queue<int, vector<int>, greater<int>> min_heap;
    
    for (int i = 0; i < N * N; i++) {
        int number;
        cin >> number;
        
        if (min_heap.size() < N) {
            min_heap.push(number);
        }
        else {
            if (number > min_heap.top()) {
                min_heap.pop();
                min_heap.push(number);
            }
        }
    }
    
    cout << min_heap.top();
    
    return 0;
}