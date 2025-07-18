#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;

struct Compare {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) {
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    priority_queue<int, vector<int>, Compare> abs_heap;
    
    while (N--) {
        int number;
        cin >> number;
        
        if (number == 0) {
            if (!abs_heap.empty()) {
                cout << abs_heap.top() << "\n";
                abs_heap.pop();
            }
            else {
                cout << "0\n";
            }
        }
        else {
            abs_heap.push(number);
        }
    }
    
    return 0;
}